/*���������ε����߳�a��b��c(�߳�������С��)�������������area���������
�����������߹����������Σ�Ӧ������data error������Ϣ��ʾ��
ע�����ݡ����ף��ؾ��ء���ʽ��area����p(p-a)(p-b)(p-c)������p��(a+b+c)/2��*/

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
