#include <linux/slab.h>
#include <linux/uaccess.h>

unsigned char *pbuffer;
int rd_offset=0;
int wr offset=0
int buflen=0;
pbuffer= kmalloc (MAX_SIZE, GFP_KERNEL);
kfree(pbuffer);

if(wr_offset >= MAX_SIZE)
{ 

	printk("buffer is full\n");
	return -ENOSPC;

}
wcount = size;
if(wcount > MAX_SIZE - wr_offset)

wcount = MAX_SIZE wr_offset;

ret = copy_from_user(ubuf, pbuffer + wr_offset,wcount);

if(ret) {

printk("copy from user failed\n");
return -EFAULT;
} 
wr_offset+=wcount; 
buflen + wcount;

if(buflen==0)
{ 
printk("buffer is empty\n");
return 0;
}

rcount = size;

if(rcount > buflen) 
	rcount = buflen;

ret = copy_to_user(ubuf, pbuffer + rd_offset,rcount);
if(ret)
{ 
printk("copy to user failed\n");
return -EFAULT;
}
rd_offset+=rcount;
buflen = rcount;