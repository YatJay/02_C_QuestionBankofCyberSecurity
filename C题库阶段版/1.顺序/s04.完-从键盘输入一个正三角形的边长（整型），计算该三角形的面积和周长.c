/*从键盘输入一个正三角形的边长（整型），计算该三角形的面积和周长。
注：根据“海伦－秦九韶”公式，area＝√p(p-a)(p-b)(p-c)，其中p＝(a+b+c)/2、a,b,c为三角形的3条边长。*/

/*
sqrt()开方函数
	【功能】sqrt() 用来求给定值的平方根，
	【原型】double sqrt(double x);
	【头文件】#include <math.h>
	【参数】x 为要计算平方根的值。
	【报错】如果 x < 0，将会导致 domain error 错误，并把全局变量 errno 的值为设置为 EDOM。
	【返回值】返回 x 平方根，为double类型。
*/
#include <stdio.h>
#include <math.h> 
int main(void){
    int a,len;
    double p,area;
    printf("Please input the length of the Equilateral triangle: ");
    scanf("%d",&a);
    
    len=3*a;
    p=len/2;
    area=sqrt(p*(p-a)*(p-a)*(p-a));
    
    printf("\nThe area of this triangle is %.2f , the perimeter of this triangle is %d.",area,len);   
    return 0;
}
