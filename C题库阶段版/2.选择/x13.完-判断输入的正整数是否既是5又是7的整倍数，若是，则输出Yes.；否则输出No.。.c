/*�ж�������������Ƿ���� 5 ���� 7 �������������ǣ��������Yes.�������������No.����*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("Please input an integer:");
    scanf("%d",&num);
    if(num%5==0&&num%7==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
