/*��֪ĳ��Ʒ������30 ��������������num�����ͣ���������ܼۣ����ͣ���*/

#include <stdio.h>
#define PRICE 30  //�궨�� 
int main(void)
{
    int num;
    printf("please input num: ");
    scanf("%d", &num);
    printf("\nTotal=%d\n", num * PRICE);

    return 0;
}
