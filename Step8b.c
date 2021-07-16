#define MY_IOCTL_PSTAT


struct pseudo_stat {

int len;
int avail;
};


IOR(IOC MAGIC, 4, struct pseudo_stat)

static long pseudo ioctl (struct file *file, unsigned int cmd, unsigned long arg) 
{ 
switch(cmd) 
{
case MY_IOCTL_PSTAT:

printk("ioctl--kfifo statistrics\n");
stat.len= kfifo_len(&myfifo);
stat.avail=kfifo_avail(&myfifo);

ret=copy_to_user( (char user* )arg, &stat, sizeof(pseudo_stat)); 
if(ret) {
printk("error in copy_to_user\n"); 
return -EFAULT;
}
break;
}
return 0;
}

struct pseudo_stat stat; 
ret=ioctl (fd, MY_IOCTL_PSTAT, &stat);
if(ret<0)
{
	perror("ioctl");
	exit (4);
}