/*�Ӽ�������10��ѧ���ɼ���double�������㲢������10��ѧ����ƽ���ɼ�������С�����2λ����*/

#include <stdio.h>

int main(void)
{
	int i;
	double arr[10];
	double sum = 0.0, aver;

	printf("Input:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	aver = sum / 10;

	printf("Output:\n");
	printf("average=%.2f\n", aver);
	return 0;
}
