/*�����ѱ�д���ִ��룬����ݳ����е�Ҫ�����Ƴ���
������Ĺ����ǣ��Ӽ������������������ֱ𱣴浽����numA��numB�����ú���swap()ʵ��numA��numB�Ľ���������main������������������numA��numB��*/

#include<stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/******start******/
void swap(int *a,int *b);
/******end******/

int main(void)
{
	int numA, numB;

	printf("please input a and b: ");
	scanf("%d %d", &numA, &numB);

	swap(&numA, &numB);
	printf("Output:\na=%d, b=%d\n", numA, numB);

	return 0;
}

/* �����ִ��빦�ܽ��飺ʵ���Ӻ���swap()�����a��b�Ľ��� */
/******start******/
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
/******end******/

