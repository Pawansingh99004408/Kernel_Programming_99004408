#include<linux/kfifo.h> unsigned char *pbuffer;
#define MAX_SIZE 1024

struct kfifo kfifo;
pbuffer=kmalloc (MAX_SIZE, GFP_KERNEL); 
kfifo_init(&kfifo, huffer); 
Kfifo_free(kfifo);


if(kfifo_is_full(&myfifo))
{
	printk("buffer is full\n"); return -ENOSPC;
}

wcount = size;

if(wcount > kfifo_avail(&myfifo);) 
	wcount = kfifo_avail(&myfifo);

char *tbuf=kmalloc (wcount, GFP_KERNEL);

ret-copy_from_user(tbuf, ubuf, wcount);

kfifo_in(&myfifo, tbuf, wcount);
kfree(tbuf);