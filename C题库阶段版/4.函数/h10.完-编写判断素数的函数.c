/*�������´���������ж����������Ĵ��롣������ֻ�ܱ�1��������������������*/

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
		puts("������");
	else
		puts("��������");
}

/******start******/
int IsShuShu(int x){
	int flag=1;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){  //�ܱ�������������flag���㣬�������� ����������ѭ��
			flag=0;
			break;
		}
	}
	return flag;
}
/******end******/

