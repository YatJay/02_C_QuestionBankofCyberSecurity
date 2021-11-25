/*题目描述
编一个程序，读入用户输入的，以“.”结尾的一行文字，统计一共有多少个单词，并分别输出每个单词含有多少个字符。
（凡是以一个或多个空格隔开的部分就为一个单词，不判断输入是否以"."结尾，单词中包含的数字也要统计）
输入格式
输入	包括1行字符串，以“.”结束，字符串中包含多个单词，单词之间以一个或多个空格隔开。
输出	输出字符串中每个单词包含的字母的个数。*/

#include <string.h>
#include <stdio.h>
int main(void){
    char str[128];
    int i,cnt=0;
    
    printf("Input a string:");
	gets(str);
    for(i=0;str[i]!='.'&&str[i]!='\0';i++){
    	if(str[i]!=' '){
    		cnt++;
		}
		else if(str[i]==' '||str[i]=='.'){
			printf("%d ",cnt);
			cnt=0;
		}
	}
	//cnt=cnt+1;
	//printf("The number of words is %d",cnt);
    return 0;
}



