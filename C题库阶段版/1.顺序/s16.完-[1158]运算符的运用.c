/*从键盘输入一个值给变量a，计算进行如下赋值表达式计算之后a的值：a-=2 */

#include <stdio.h>
int main(void){
    int a;
    printf("Input: ");
	scanf("%d", &a);
	a -= 2;
    printf("Output:");
    printf("%d\n", a);

    return 0;
}
