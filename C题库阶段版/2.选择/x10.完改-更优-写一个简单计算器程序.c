/*编写一个简单计算器程序，输入格式为：data1 op data2。
其中data1和data2是参加运算的两个数(data1、data2必须定义为int，但二者相加可能超出int能表示的范围)，
op为运算符，它的取值只能是+、-、*、/、%。输出：计算除法输出小数点后两位，其他运算均输出整数。*/
#include <stdio.h>
int main(void)
{
	int data1, data2, flag = 0;
	char op;
	double result;
	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	switch (op)
	{
		case '+':
			result = (double)data1 + data2;
			break;
		case '-':
			result = (double)data1 - data2;
			break;
		case '*':
			result = (double)data1 * data2;
			break;
		case '/':
			if (data2 == 0)
			{
				flag = 1;
				break;
			}
			result = (double)data1 / data2;
			break;
		case '%':
			if (data2 == 0)
			{
				flag = 1;
				break;
			}
			result = data1 % data2;
			break;
		default:
			break;
	}
	printf("Output:");
	if (flag == 0)
	{
		if (op == '/')
		{
			printf("\n%d%c%d=%.2f\n", data1, op, data2, result);
		}
		else
		{
			printf("\n%d%c%d=%.0f\n", data1, op, data2, result);
		}
	}
	else
	{
		printf("\nError! chu shu wei 0.\n");
	}
	return 0;
}
