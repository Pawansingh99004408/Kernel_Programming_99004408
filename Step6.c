typedef struct priv_obj 
{ 
struct cdev cdev; 
struct kfifo kfifo; 
struct device* pdev;
}PRIV_OBJ;

PRIV_OBJ* pobj;
pobj=kmalloc(sizeof (PRIV_OBJ), GFP_KERNEL); 

kfree(pobj);