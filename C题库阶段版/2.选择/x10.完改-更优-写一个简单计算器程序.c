/*��дһ���򵥼��������������ʽΪ��data1 op data2��
����data1��data2�ǲμ������������(data1��data2���붨��Ϊint����������ӿ��ܳ���int�ܱ�ʾ�ķ�Χ)��
opΪ�����������ȡֵֻ����+��-��*��/��%�����������������С�������λ��������������������*/
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
