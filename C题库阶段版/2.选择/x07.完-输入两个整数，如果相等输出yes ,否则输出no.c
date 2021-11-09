/*输入两个整数，如果相等输出“yes” ， 否则输出“no”。*/
#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Please input x y:");
    scanf("%d %d",&a,&b);
    if(a==b) printf("Yes.");
    else printf("NO.");
    
    return 0;
}

