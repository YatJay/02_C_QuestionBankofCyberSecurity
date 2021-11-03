/*输入一个小写英文字母，首先输出它及其ASCII码，然后输出其对应的大写字母及其ASCII码。*/

/*
1.ASCII码表中大小写字母相差32：小写字母 - 32 = 大写字母   ||  大写字母 + 32 = 小写字母
2.%d输出char类型数据，直接输出其ASCII码 
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
