/*����1��10�����������������ÿһ�����İ˽��ƺ�ʮ�����Ʊ�ʾ��*/

/*
ע�⣺
ʮ����ת�˽��ƺ�ʮ�����ƣ�
	�����ʮ�������Ǹ���ʱ��������෴������������%o %x������� -%o -%x�Ӹ��� 
*/
#include <stdio.h>
int main()
{
        int n;
        printf("Input: ");
        scanf("%d", &n);
        printf("Output:\n");
        if (n < 0){
                printf("-%o -%x\n", -n, -n);
        }
        else{
                printf("%o %x\n", n, n);
        }
        return 0;
}
