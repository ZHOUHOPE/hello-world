//������·�����
//ax + by = c
//dx + ey = f
//ע������/�������������
#include <stdio.h>
int main()
{   float a,b,c,d,e,f,x,y; //������� 
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
    scanf("%f",&f);//�����������ֵ 
    if(b*d==a*e)//����ĸΪ��ʱ 
    {
	printf("��ʵ��");
	} 
	else//��ĸ��Ϊ�� 
	{
    y=(c*d-a*f)/(b*d-a*e);
    x=(c*e-b*f)/(a*e-b*d);
    printf("x=%f\n",x);
    printf("y=%f",y);
	}
    return 0;
 } 
