/*输入1个10进制整数，依次输出每一个数的八进制和十六进制表示。*/

/*
注意：
十进制转八进制和十六进制：
	输入的十进制数是负数时，需对其相反数即正数进行%o %x输出并在 -%o -%x加负号 
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
