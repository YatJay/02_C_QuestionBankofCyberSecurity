/*要求：不改变单词的顺序的情况下，将每一个单词翻转（单词倒序写）。输入中只有英文单词和空格（不含其它字符）。*/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

void reverseWord(char *str);
int main(void){
    char str[128],*pstr;
    int i,j;
    printf("Please input input a string:");
    gets(str);
    printf("\n%s",str);
    
    for(i=0;str[i]!='\n';i++){
    	pstr=&str[i];
    	
	}
    printf("\n%s",str);
    return 0;
}

void reverseWord(char *str){
	int i=0;
	int len=strlen(str);
	char temp;
	while(i<=len/2-1){
		temp=*(str+i);
		*(str+i)=*(str+len-1-i);
		*(str+len-1-i)=temp;
		i++;
	}
	printf("\nReverse successfully.");
}

