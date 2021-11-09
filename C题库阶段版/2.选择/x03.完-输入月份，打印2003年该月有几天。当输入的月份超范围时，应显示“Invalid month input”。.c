/*输入月份，输出 2003 年该月有几天。当输入的月份超范围时，应输出“Invalid month input!”*/

/*
注意：本例中使用对于操作相同的case，可以将其如此合并 
	switch()---default设置了检查输入是否合规范，不必写do---while()检查输入 
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

