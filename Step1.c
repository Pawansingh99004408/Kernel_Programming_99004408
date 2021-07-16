#include <linux/fs.h>

dev_t pdevid;
int ndevices=1;

static int __init psuedo_init(void)
{
int ret;

ret= alloc_chrdev_region (&pdevid, 0, ndevices, "pseudo_sample");

if(ret) 
{
	printk("Pseudo: Failed to register driver\n");

	return -ETNVAL;

}

printk("Successfully registered, major=%d, minor=%d\n", MAJOR (pdevid), MINDR(pdevid)); printk("Pseudo Driver Sample..welcome\n");

return 0;

}

static void __exit psuedo_exit(void) 
{
	unregister_chrdev_region(pdevid, ndevices);
	printk("Pseudo Driver Sample. .Bye\n");

}