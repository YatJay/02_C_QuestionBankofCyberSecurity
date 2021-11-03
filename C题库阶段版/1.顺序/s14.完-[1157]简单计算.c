/*从键盘输入一个值给变量a，计算进行如下赋值表达式计算之后a的值： a+=a 
 输入格式  只有一行，包含一个整数a。 
输出  输出题目描述中表达式运算后a的值。注意行尾输出换行。 */

#include <stdio.h>
int main(void){
    int a;
    printf("Input: ");
	scanf("%d", &a);
	a += a;
    printf("Output:\n");
    printf("%d\n", a);

    return 0;
}
