/*�Ӽ�������һ��ֵ������a������������¸�ֵ���ʽ����֮��a��ֵ�� a+=a 
 �����ʽ  ֻ��һ�У�����һ������a�� 
���  �����Ŀ�����б��ʽ�����a��ֵ��ע����β������С� */

#include <stdio.h>
int main(void){
    int a;
    printf("Input: ");
	scanf("%d", &a);
	a += a;
    printf("Output:\n");
    printf("%d\n", a);

    return 0;
}
