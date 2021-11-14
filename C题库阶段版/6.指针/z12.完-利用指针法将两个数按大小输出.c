/*编写程序将两个数按大小输出。注意：请不要修改程序框架和结构*/

#include <stdio.h>

/******start******/
void fun(int *a,int *b);
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
void fun(int *a,int *b){
	int temp;
	if(*a<*b){
		temp=*a;
		*a=*b;
		*b=temp;
	}
}

/******end******/
