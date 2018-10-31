//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include <stdio.h>
#include <math.h>//调用sqrt求delta的平方根
void CalculateRealRoot(double a,double b,double c);//函数说明 
int main() 
{   
    double a,b,c;//定义a，b，c为二次方程的系数
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    CalculateRealRoot(a,b,c);//调用函数 
	return 0;
}
void CalculateRealRoot(double a,double b,double c)
{
	double delta,x1,x2;//定义x
	delta=b*b-4*a*c;
	if ( delta<0 )
	{
		printf("无实根\n");
	 } 
	 else 
	 {
	 	if ( delta==0 )
	 	{
	 		x1=-b/(2*a);
	 		x2=-b/(2*a);
	 		printf("x1=%lf,x2=%lf",x1,x2);
		 }
		 else
		 {
		 	x1=(-b+sqrt(delta))/(2*a);
		 	x2=(-b-sqrt(delta))/(2*a);
		 	printf("x1=%lf,x2=%lf",x1,x2);
		 }
		 
	 }
}
