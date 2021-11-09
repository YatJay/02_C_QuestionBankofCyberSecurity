/*从键盘输入3个整数，输出绝对值最大的数。*/

/*
三个数字找最大值：
	if--else  前两比较，较大者赋给max； 
	if--else  max和最后一个数比较，较大者赋给max； 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{

	int number1, number2, number3, max;
	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &number1, &number2, &number3);

	if (abs(number1) > abs(number2)){
		max = number1;
	}
	else{
		max = number2;
	}
	if (abs(max) < abs(number3)){
		max = number3;
	}

	printf("Output:\nThe number with maximum absolute value is %d.\n", max);

	return 0;
}
