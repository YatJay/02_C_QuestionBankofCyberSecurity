//从键盘上输入两个实数，计算这两个实数的商（只计算前面的数除以后面的数）

/*
注意：
    double类型输入使用%lf占位符，输出使用%f占位符
*/
#include <stdio.h>
int main(void)
{
       double number1, number2;
       printf("Input 2 numbers: ");
       scanf("%lf%lf", &number1, &number2);
       printf("Output:\n");
       if (number2 == 0)
       {
              printf("Divid by zero.");
       }
       else
       {
              printf("The result is: %.2f.", number1 / number2);
       }
       return 0;
}
