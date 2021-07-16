
for(i=0;i<wcount; i++) 
{
get_user(*(pbuffer+wr_offset),ubuf); 
++wr_offset; 
ubuf++;
msleep(100);
}

down_interruptible(&s1);
for(i=0;i<wcount; i++) 
{ 
get_user(*(pbuffer+wr_offset),ubuf); 
++wr_offset;
ubuf++;
msleep(100);
}
up(&s1);