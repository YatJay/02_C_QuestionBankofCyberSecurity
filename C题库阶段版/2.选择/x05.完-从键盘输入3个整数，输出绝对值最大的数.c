#include <stdio.h>
/*�Ӽ�������3���������������ֵ��������*/

/*
ע�⣺
�������Ƚϴ�С����һ���㷨���Ķ� 
*/
#include <math.h>
int main(void){
	int a0,b0,c0,a,b,c,max0,max;
	printf("Please input 3 number:");
	scanf("%d %d %d",&a0,&b0,&c0);
	a=abs(a0);
	b=abs(b0);
	c=abs(c0);
	if(a>b&&a>c){
		max0=a0;
		max=a;
	}
	if(b>c&&b>a){
		max0=b0;
		max=b;
	}
	if(c>b&&c>a){
		max0=c0;
		max=c;
	}
	printf("abs(%d)=%d is max",max0,max);
	return 0;
}
