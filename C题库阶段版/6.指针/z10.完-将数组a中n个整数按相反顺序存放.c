/*������һ������a����5��Ԫ�أ�ͨ��������������5��Ԫ�ء�
����һ��ָ�����p��ָ�������׵�ַ��Ȼ����ú���invʵ�ֽ�����Ԫ���෴��ţ�
Ȼ������Ļ����෴˳���ŵ�����Ԫ�ء�
*/

/*
�Ķ��汾������ԭ�ط�ת������ʹ��forѭ���������ʹ��whileѭ����������i++��forѭ������һ������ 
*/

#include <stdio.h>
void inv(int *x,int n);
int main()
{    
	 int i,a[5];
	 printf("The original array:\n");
	 for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	 printf("Output:\n");
	 inv(a,5);
	 printf("The array has been inverted:\n");
	 for(i=0;i<5;i++)
	   printf("%d ",a[i]);
	 printf("\n");
	 return 0;
}

void inv(int *x,int n)                   //�β�x��ָ�����       
{
/******start******/
	int i,temp;
	i=0; 
	while(i<=n/2-1){
		temp=*(x+i);
		*(x+i)=*(x+n-1-i);
		*(x+n-1-i)=temp;
		i++;
	}
/******end******/
}
