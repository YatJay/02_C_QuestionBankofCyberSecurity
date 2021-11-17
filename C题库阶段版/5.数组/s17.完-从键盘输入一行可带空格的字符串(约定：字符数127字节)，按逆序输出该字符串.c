/*从键盘输入一行可带空格的字符串(约定：字符数≤127字节)，按逆序输出该字符串。
编程可用素材：printf("Input a string: ")...、printf("Output: ")...。*/

#include <stdio.h>
#include <string.h>
int main(void){
    char str[128],str1[128];
    int i,j,len;
    printf("Input a string: ");
    gets(str);
    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--){
    	str1[j]=str[i];
    	j++;
	}
	str1[j]='\0';
	printf("%s",str1);
    return 0;
}
