/*�����·ݣ���� 2003 ������м��졣��������·ݳ���Χʱ��Ӧ�����Invalid month input!��*/

/*
ע�⣺������ʹ�ö��ڲ�����ͬ��case�����Խ�����˺ϲ� 
	switch()---default�����˼�������Ƿ�Ϲ淶������дdo---while()������� 
*/
#include <stdio.h>
int main(void)
{
    int month, big = 31, small = 30, feb = 28;
    printf("please input the month number: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n2003.%d has %d days\n", month, big);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n2003.%d has %d days\n", month, small);
        break;
    case 2:
        printf("\n2003.%d has %d days\n", month, feb);
        break;
    default:
        printf("\nInvalid month input !\n");
    }

    return 0;
}

