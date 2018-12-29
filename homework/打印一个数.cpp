//打印一个数 
#include <stdio.h>
int main ()
{
	long long n,m;
	int x=0;
	int a[100]; 
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		n/=10;
		x++;
	}
	for(int i=0;i<x;i++)
	{
		a[i]=m%10;
		m/=10;
	}
	for(int j=x-1;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
	
 } 
