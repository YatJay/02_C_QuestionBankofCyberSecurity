/*请在以下代码中完成判断素数函数的代码。素数是只能被1或自身整除的正整数。*/

#include <stdio.h>

/******start******/
int IsShuShu(int x);
/******end******/

int main()
{
	int x;
	printf("input a integer: ");
	scanf("%d", &x);

	printf("output:\n");
	if(IsShuShu(x))
		puts("是素数");
	else
		puts("不是素数");
}

/******start******/
int IsShuShu(int x){
	int flag=1;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){  //能被其他数整除则flag置零，不是素数 ，立即跳出循环
			flag=0;
			break;
		}
	}
	return flag;
}
/******end******/

