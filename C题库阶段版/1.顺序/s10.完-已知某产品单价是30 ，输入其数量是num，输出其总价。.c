/*已知某产品单价是30 ，输入其数量是num（整型），输出其总价（整型）。*/

#include <stdio.h>
#define PRICE 30  //宏定义 
int main(void)
{
    int num;
    printf("please input num: ");
    scanf("%d", &num);
    printf("\nTotal=%d\n", num * PRICE);

    return 0;
}
