/*������һ������a����5��Ԫ�أ�ͨ��������������5��Ԫ�ء�
Ȼ����ú���invʵ�ֽ�����Ԫ���෴��ţ�
Ȼ������Ļ����෴˳���ŵ�����Ԫ�ء�*/

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
	int i, tmp;
	for (i=0;i<n/2; i++){  //�˴��Ķ���ʹ����forѭ�� 
		tmp=*(x+i);
		*(x+i)=*(x+n-1-i);
		*(x+n-1-i)=tmp;
	}
/******end******/
}
