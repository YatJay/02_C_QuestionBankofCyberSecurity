/*�Ӽ�������x,y,z��ֵ����д����������±��ʽ��ֵ��
        x+z%3*(int)(x+y)%2/4  */
        
#include <stdio.h>
int main(void){
    int float_z;
    double float_x, float_y;
    printf("please input x,y,z:");
    scanf("%lf,%lf,%d", &float_x, &float_y, &float_z);
    printf("Output:");
    printf("%f\n", float_x + float_z % 3 * (int)(float_x + float_y) % 2 / 4);
    return 0;
}

