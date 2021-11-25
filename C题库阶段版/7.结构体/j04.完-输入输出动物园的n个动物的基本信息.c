/*输入输出动物园的n个动物的基本信息（如图所示）。
2

1 snake 9

2 monkey 23

是键盘输入的。*/

#include<stdio.h>


/******start******/
struct animal{
	int No,count;
	char name[20];
};
int main(){
	int i,n;
	struct animal ani[50];
	printf("Please input the number of animals:");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d%s%d",&ani[i].No,ani[i].name,&ani[i].count);
	}
/******end******/	

	printf("Output:\n");
	printf("No\tname\tnumber\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", ani[i].No);
		printf("%s\t", ani[i].name);
		printf("%d\n", ani[i].count);
	}

	return 0;
}
