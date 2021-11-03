/*从键盘输入一个正方体的边长（整型），计算该正方体的体积和表面积。*/

#include <stdio.h>
int main(void){
    int a,v,s;
    printf("Please input the length of side: ");
    scanf("%d",&a);
    v=a*a*a;
    s=6*a*a;
    printf("\nV = %d , S = %d",v,s);
    
    return 0;
}

