/*输入输出n个职员的基本信息（如图所示）。注
其中：
3

1001 zhao 100

1002 qian 150

1003 sun 130

从键盘输入*/

#include<stdio.h>

/******start******/
struct employee{
	int number;
	int name[20];
	double prize;
};
int main(){
	int n,i;
	struct employee em[50];  //这里事先不知道n的值，定义时尽量申请较大的内存，并在键盘输入n时给出提示 
	printf("Please input n(<0n<=50):");
	scanf("%d",&n);
	printf("\nInput the info:\n");
	for(i=0;i<n;i++){  //循环执行条件与用户输入的n相关
		scanf("%d%s%lf",&em[i].number,em[i].name,&em[i].prize);
	}
/******end******/	

	printf("Output:\n");
	printf("number\tname\tprize\n");
	for (i = 0; i < n; i++){
		printf("%d\t", em[i].number);
		printf("%s\t", em[i].name);
		printf("%.2f\n", em[i].prize);
	}

	return 0;
}
