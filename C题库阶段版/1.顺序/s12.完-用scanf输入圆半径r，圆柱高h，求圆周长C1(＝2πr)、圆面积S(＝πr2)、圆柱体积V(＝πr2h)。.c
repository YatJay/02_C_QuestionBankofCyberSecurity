/*用scanf输入圆半径r，圆柱高h，求圆周长C1(＝2πr)、圆面积S(＝πr2)、圆柱体积V(＝πr2h)。(注意：本题中规定圆周率取值为3.14)*/

#include <stdio.h>
#define PI 3.14
int main(void){
    int r,h;
    float c,s,v;
    printf("Please input the r and h of this cylinder:");
    scanf("%d %d",&r,&h);
    c=2*PI*r;
    s=PI*r*r;
    v=s*h;
    printf("\nC = %.2f\nS = %.2f\nV = %.2f",c,s,v);
    
    return 0;
}
