/*输入输出一个学生的基本信息（如图所示）*/

#include<stdio.h>

/******start******/
struct student{
	int number;
	char name[20];
	int age;
	double score;
};
/******end******/

int main(void)
{
	struct student st1;
	
	printf("Input the info:\n");
	scanf("%d %s %d %lf", &st1.number, st1.name, &st1.age, &st1.score);
	
	printf("Output:\n");
	/******start******/
	printf("Number:%d\n",st1.number);
	printf("Name:%s\n",st1.name);
	printf("Age:%d\n",st1.age);
	printf("Score:%.2f\n",st1.score);
	/******end******/
	return 0;
}
