/*输入 x、 y 两个整数，输出其中较大的数。*/
#include <stdio.h>
int main(void)
{
    int a,b,max;
    printf("Please input x,y:");
    scanf("%d,%d",&a,&b);
    if(a>=b) max = a;
    else max = b;
    printf("%d is bigger.",max);
    
    return 0;
}

