/*��Ҫ���д�����ָ�����֣�
���������ѱ�д���ִ��룬����ݳ����е�Ҫ�����Ƴ��򡪡�,���ܶԳ��������������������κ��޸Ļ����±�дһ�����򣬷�����0�ִ���
��������Ĺ����ǣ��ȴӼ��̶����8��ѧ����6�ſγɼ�����ڶ�ά����student��(ÿһ�д洢һ��ѧ�������ݣ���0��Ϊѧ�ţ���1��6������Ϊ6�ſεĳɼ�)��
	�ٴӼ��̶���һ��ѧ�ţ���student���Ҹ�ѧ���Ƿ���ڣ������ڣ��������ƽ���ɼ����������ڣ�����ʾ��not Find!����
*/

#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8

/* ����aver�Ĺ���Ϊ����ѧ��ΪstuNo��ѧ����6�ſογ�֮ƽ���ɼ�����ͨ������ֵ����
		��δ�ҵ�ѧ��stuNo���򷵻�NOT_FIND */	
float aver(int pStu[TOTAL_STU][7], int stuNo);

int main(void)
{
	int student[TOTAL_STU][7]; /* the first column save student's number */
	float averScore;
	int i, j, stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);
	/* �����ִ��빦�ܽ��飺�Ӽ��̶����8��ѧ����6�ſγɼ�����ڶ�ά����student�� */	
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
