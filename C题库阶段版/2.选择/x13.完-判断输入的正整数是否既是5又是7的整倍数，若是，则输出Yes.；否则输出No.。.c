/*判断输入的正整数是否既是 5 又是 7 的整倍数，若是，则输出“Yes.”；否则输出“No.”。*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("Please input an integer:");
    scanf("%d",&num);
    if(num%5==0&&num%7==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
