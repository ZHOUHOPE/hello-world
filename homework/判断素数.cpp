//������ֻ��1�ͱ��������ӵ���
#include <stdio.h>
int main (){
	int n,m,j;
	m=0;
	scanf ("%d",&n);
	for(int i=2;i<n;i++)
	{
		j=n%i;
		if(j==0);
		break;
		m=1;
	}
	if(m==1)
	printf ("������");
	else
	printf("����");
} 
