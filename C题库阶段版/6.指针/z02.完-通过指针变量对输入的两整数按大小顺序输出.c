/*ͨ���������������ͱ���a��b��Ȼ������ָ�����p1��p2ָ�����ͱ���a��b��
Ȼ��a��b֮���໥�Ƚϣ�a��С��b����p1��p2�໥������Ȼ�����ȴ�С˳��
���p1��p2��ָ������ͱ�����ֵ��
*/

#include <stdio.h>

/******start******/
void fun(int *p1,int *p2);
/******end******/
int main()
{
	int a,b;
	printf("Input a, b:");
	scanf("%d %d",&a,&b);
	printf("Output:\n");
	fun(&a,&b);
	printf("max=%d,min=%d\n", a, b);

	return 0;
}

/******start******/
void fun(int *p1,int *p2){
	int temp;
	if(*p1<*p2){
		temp=*p1;
		*p1=*p2;
		*p2=temp;
	}
}
/******end******/
