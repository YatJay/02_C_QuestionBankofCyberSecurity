/*输入三角形的三边长a、b、c(边长可以是小数)，求三角形面积area，并输出。
如果输入的三边构不成三角形，应给出“data error”的信息提示。
注：根据“海伦－秦九韶”公式，area＝√p(p-a)(p-b)(p-c)，其中p＝(a+b+c)/2。*/

#include <stdio.h>
#include <math.h>
int main(void)
{
       double side1, side2, side3, circle, area;
       printf("please input triange sides:");
       scanf("%lf %lf %lf", &side1, &side2, &side3);
       printf("Output:\n");
       if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
              circle = (side1 + side2 + side3) / 2;
              area = sqrt(circle * (circle - side1) * (circle - side2) * (circle - side3));
              printf("area=%.2f\n", area);
       }
       else{
              printf("data error\n");
       }
       return 0;
}
