//�Ӽ�������������ʵ��������������ʵ�����̣�ֻ����ǰ��������Ժ��������

/*
ע�⣺
    double��������ʹ��%lfռλ�������ʹ��%fռλ��
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
