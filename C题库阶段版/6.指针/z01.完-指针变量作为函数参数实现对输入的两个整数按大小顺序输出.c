/*ͨ���������������ͱ���a��b��Ȼ������ָ�����p1��p2ָ�����ͱ���a��b��
Ȼ��a��b֮���໥�Ƚϣ�a��С��b����p1��p2�໥������Ȼ�����ȴ�С˳��
���p1��p2��ָ������ͱ�����ֵ��
*/

#include <stdio.h>

/******start******/
void swap(int *p1,int *p2);
/******end******/

int main()
{
	  int a,b;
	  int *pointer_1,*pointer_2;
	  printf("please enter a and b:");
	  scanf("%d %d",&a,&b);
	  pointer_1=&a;
	  pointer_2=&b;
	  if(a<b) swap(pointer_1,pointer_2);
	  printf("Output:\nmax=%d,min=%d\n",a,b);
	  return 0;
 }    

/******start******/
void swap(int *p1,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
/******end******/
