/*输入两个整数，输出这两个整数的和（每个数占4位宽，+和=左右均无空格）。*/

#include <stdio.h>
int main(void){
    int a,b;
    printf("Please input 2 number: ");
    scanf("%d %d",&a,&b);
    printf("%4d+%4d=%4d",a,b,a+b);
    
    return 0;
}
