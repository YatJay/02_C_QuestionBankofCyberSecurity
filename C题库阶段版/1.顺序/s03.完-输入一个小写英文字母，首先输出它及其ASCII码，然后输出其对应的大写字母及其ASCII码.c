/*����һ��СдӢ����ĸ���������������ASCII�룬Ȼ��������Ӧ�Ĵ�д��ĸ����ASCII�롣*/

/*
1.ASCII����д�Сд��ĸ���32��Сд��ĸ - 32 = ��д��ĸ   ||  ��д��ĸ + 32 = Сд��ĸ
2.%d���char�������ݣ�ֱ�������ASCII�� 
*/
#include <stdio.h>
int main(void){
    char ch;
    printf("Please input a lower letter: ");
    scanf("%c",&ch);
    printf("%c(%d)\n", ch, ch);
    printf("%c(%d)\n", ch - 32, ch - 32);
    return 0;
}
