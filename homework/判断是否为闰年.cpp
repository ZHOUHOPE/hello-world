//��4��������������꣬����00��β����ݱ�400�����������ꡣ
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
		printf("����"); 
		}
    else{
    	printf("ƽ��");
	} 
	}
	else{
		x=year%4;
		if(x==0)
		{
			printf("����"); 
		}
		else{
			printf("ƽ��"); 
		}
	} 
	}
}
