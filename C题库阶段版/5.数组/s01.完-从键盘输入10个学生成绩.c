/*从键盘输入10个学生成绩（double），计算并输入这10个学生的平均成绩（保留小数点后2位）。*/

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
