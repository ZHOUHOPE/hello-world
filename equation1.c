//���һԪ���η��̵ĸ�
//����sqrt()����
//ע����û�н�
#include <stdio.h>
#include <math.h>//����sqrt��delta��ƽ����
void CalculateRealRoot(double a,double b,double c);//����˵�� 
int main() 
{   
    double a,b,c;//����a��b��cΪ���η��̵�ϵ��
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    CalculateRealRoot(a,b,c);//���ú��� 
	return 0;
}
void CalculateRealRoot(double a,double b,double c)
{
	double delta,x1,x2;//����x
	delta=b*b-4*a*c;
	if ( delta<0 )
	{
		printf("��ʵ��\n");
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
