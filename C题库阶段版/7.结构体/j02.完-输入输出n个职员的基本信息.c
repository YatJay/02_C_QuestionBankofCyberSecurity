/*�������n��ְԱ�Ļ�����Ϣ����ͼ��ʾ����ע
���У�
3

1001 zhao 100

1002 qian 150

1003 sun 130

�Ӽ�������*/

#include<stdio.h>

/******start******/
struct employee{
	int number;
	int name[20];
	double prize;
};
int main(){
	int n,i;
	struct employee em[50];  //�������Ȳ�֪��n��ֵ������ʱ��������ϴ���ڴ棬���ڼ�������nʱ������ʾ 
	printf("Please input n(<0n<=50):");
	scanf("%d",&n);
	printf("\nInput the info:\n");
	for(i=0;i<n;i++){  //ѭ��ִ���������û������n���
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
