//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
#include <stdio.h>
int main ()
{
   int year;
   int n;
   int x,y,z;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
   	 scanf("%d",&year);
   	 x=year%100;
   	 if(x==0)
   	 {
    y=year%400;
    if(y==0)
	{
		printf("闰年"); 
		}
    else{
    	printf("平年");
	} 
	}
	else{
		x=year%4;
		if(x==0)
		{
			printf("闰年"); 
		}
		else{
			printf("平年"); 
		}
	} 
	}
}
