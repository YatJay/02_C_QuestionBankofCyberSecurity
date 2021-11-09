/*据要求编写程序的指定部分：
　　程序已编写部分代码，请根据程序中的要求完善程序——,不能对程序中已有其它部分作任何修改或重新编写一个程序，否则作0分处理。
　　程序的功能是：先从键盘读入的8个学生的6门课成绩存放在二维数组student中(每一行存储一个学生的数据，第0列为学号，第1～6列依次为6门课的成绩)，
	再从键盘读入一个学号，在student查找该学生是否存在，若存在，则输出其平均成绩，若不存在，则显示“not Find!”。
*/

#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8

/* 函数aver的功能为：求学号为stuNo的学生的6门课课程之平均成绩，并通过函数值返回
		若未找到学生stuNo，则返回NOT_FIND */	
float aver(int pStu[TOTAL_STU][7], int stuNo);

int main(void)
{
	int student[TOTAL_STU][7]; /* the first column save student's number */
	float averScore;
	int i, j, stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);
	/* 本部分代码功能建议：从键盘读入的8个学生的6门课成绩存放在二维数组student中 */	
	/******start******/
	for(i=0;i<TOTAL_STU;i++){
		for(j=0;j<7;j++){
			scanf("%d",&student[i][j]);
		}
	}
	/******end******/

	printf("Input a student's number to compute: ");
	scanf("%d", &stuNumber);

	averScore = aver(student, stuNumber);
	printf("Output:");
	if (NOT_FIND == averScore)
	{
		printf("\nstudent of No.%d not Find!\n", stuNumber);
	}
	else
	{
		printf("\nThe No.%d student's average is %.2f\n", stuNumber, averScore);
	}

	return 0;
}

/******start******/
float aver(int pStu[TOTAL_STU][7], int stuNo){
	int i,j,sum,flag=0;
	float aver;
	for(i=0;i<TOTAL_STU;i++){
		if(pStu[i][0]==stuNo){
			flag=1;
			for(j=1;j<7;j++){
				sum+=pStu[i][j];
			}
			aver=sum/6.0;
		}
	}
	if(flag==0){
		aver=NOT_FIND;
	}
	
	return aver;
}
/******end******/
