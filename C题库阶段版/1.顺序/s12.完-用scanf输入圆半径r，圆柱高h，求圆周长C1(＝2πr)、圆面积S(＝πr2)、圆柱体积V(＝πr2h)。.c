/*��scanf����Բ�뾶r��Բ����h����Բ�ܳ�C1(��2��r)��Բ���S(����r2)��Բ�����V(����r2h)��(ע�⣺�����й涨Բ����ȡֵΪ3.14)*/

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
