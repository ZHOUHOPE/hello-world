//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include <stdio.h>
int main()
{   float a,b,c,d,e,f,x,y; //定义变量 
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("d=");
    scanf("%f",&d);
    printf("e=");
    scanf("%f",&e);
    printf("f=");
    scanf("%f",&f);//以上输入变量值 
    if(b*d==a*e)//当分母为零时 
    {
	printf("无实根");
	} 
	else//分母不为零 
	{
    y=(c*d-a*f)/(b*d-a*e);
    x=(c*e-b*f)/(a*e-b*d);
    printf("x=%f\n",x);
    printf("y=%f",y);
	}
    return 0;
 } 
