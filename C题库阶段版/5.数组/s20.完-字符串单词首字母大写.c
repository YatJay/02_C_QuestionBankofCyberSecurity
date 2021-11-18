/*题目描述
对一个字符串中的所有单词，如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。
在字符串中，单词之间通过空白符分隔，空白符包括：空格(' ')、制表符('\t')。
(注：程序中的字符串输入输出用gets和puts）。

输入格式 输入一行：待处理的字符串（长度小于100，逗号后要先输入一个空格再输入单词）。
输出 转换后的字符串。   */

/*
ASCII码表大小写字母转换：小写字母-32=大写字母 
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char str[101];
    int i;
    printf("please input str:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    	if(i==0){
    		str[i]=str[i]-32;  //字符串首字符大写 
		}
		else if((str[i]==' '||str[i]=='\t')&&(str[i+1]>='a'&&str[i+1]<='z')){
    		str[i+1]=str[i+1]-32;  //每逢空格或tab符后的字符变大写 
		}
	}
	printf("Output:\n");
	puts(str);
    
    return 0;
}
