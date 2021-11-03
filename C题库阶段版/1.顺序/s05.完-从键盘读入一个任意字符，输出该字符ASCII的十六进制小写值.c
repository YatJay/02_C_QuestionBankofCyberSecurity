/*从键盘读入一个任意字符，输出该字符ASCII的十六进制值（小写）。*/

#include <stdio.h>
int main(void){
    char ch;
    printf("Please input a character: ");
    scanf("%c",&ch);
    printf("\nThe hex ASCII code is %x",ch);
    
    return 0;
}
