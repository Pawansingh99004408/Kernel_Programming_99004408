typedef struct priv_obj 
{
	strcut device* pdev; 
	struct list_head *lentry;
	struct cdev cdev; 
	struct kfifo kfifo;
}PRIV_OBJ;

LIST HEAD (mydevlist);
pobj=kmalloc(sizeof (PRIV_OBJ), GFP_KERNEL);

PRIV_OBJ pobj;
list_add_tail(&pobj->lentry, &mydevlist);


PRIV_OBJ *ptr, *qtr;

list_for_each_entry_safe (ptr, qtr,&mydevlist, lentry) { 
kfree(ptr); 
}


PRIV_OBJ *pobj= container_of(inode->i_cdev, PRIV OBJ, cdev); 
file->private_data = pobj;
PRIV OBJ *pobj = file->private_data;