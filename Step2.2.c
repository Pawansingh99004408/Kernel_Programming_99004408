#include <linux/cdev.h>

struct cdev cdev; 

struct file_operations fops = 
{ 
.open = pseudo_open,

.release = pseudo_close,

write = pseudo_write,

.read = pseudo_read

};


cdev_init(&cdev, & fops);
kobject_set_name(&cdev.kobj,"pdevice%d", i); 
ret = cdev_add(&cdev, pdevid, 1);
