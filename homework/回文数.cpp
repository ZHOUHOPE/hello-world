//回文数：正读与反读相等的数
#include<stdio.h>
int main(void)
{
    int x,n;
    int m;
    
    scanf("%d",&n);
    for( int i=0;i<n;i++)
	{
	int sum=0;
    scanf("%d",&x);
    m = x;
    while(m)
    {
        sum=sum*10+m%10;
        m=m/10;
    }
    if(sum==x)
        printf("yes\n");
    else
        printf("no\n");
	}
    return 0;


}

