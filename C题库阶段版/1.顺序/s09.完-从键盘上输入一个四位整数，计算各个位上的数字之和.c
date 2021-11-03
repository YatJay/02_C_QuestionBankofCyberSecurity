/*从键盘上输入一个四位整数，计算各个位上的数字之和。*/

#include <stdio.h>
int main(void){
    int num;
    int ge,shi,bai,qian;
    printf("Please input a number: ");
    scanf("%d",&num);
    ge=num%10;
    shi=num/10%10;
    bai=num/100%10;
    qian=num/1000;
    printf("Sum of each place is : %d",ge+shi+bai+qian);
    return 0;
}
