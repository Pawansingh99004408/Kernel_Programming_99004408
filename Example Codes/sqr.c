#include<fun.h>

int square(int a, int x)
{
	if (x==0)
	return 1;
    int sq = x; 
	for(int i=1;i<x;i++)
	sq=sq*x;
	return sq;
}
 
int main()
{
    
    square(3, 2);
    return 0;
}