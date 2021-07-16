int pseudo_open(struct inode* inode, struct file* file) 
{  printk("Pseudo--open method\n");
	return 0;
}
int pseudo_close(struct inode* inode, struct file* file)
{
	 printk("Pseudo--release method\n"); 
	 return 0;
}

ssize_t pseudo_read(struct file* file, char __user* buf , size_t size, loff_t* off)

{
printk("Pseudo--read method\n"); 
return 0;
}

ssize_t pseudo_write(struct file* file, const char __user* buf, size_t size, loff_t* off)
{
printk("Pseudo--write method\n"); 
return -ENOSPC;
}


