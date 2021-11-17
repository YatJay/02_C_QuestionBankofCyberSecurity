/*从键盘输入一行可带空格的字符串(约定：字符数≤127字节)，按逆序输出该字符串。
编程可用素材：printf("Input a string: ")...、printf("Output: ")...。*/

#include <stdio.h>
#include <string.h>
int main(void){
    char str[128],temp;
    int i,len;
    printf("Input a string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<=len/2-1;i++){
    	temp=str[i];
    	str[i]=str[len-1-i];
    	str[len-1-i]=temp;
	}
	puts(str);
    return 0;
}
