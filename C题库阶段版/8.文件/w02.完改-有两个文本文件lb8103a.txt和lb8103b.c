/*有两个文本文件lb8103a.txt和lb8103b.txt。键盘输入需要读的文件名，然后从该文件中读出前n（<=26）个字符。*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char fname[128];
    char ch;
    int i,n;
    
    printf("Input file name:");
    scanf("%s",fname);  //>>或使用gets(fname) [#include string.h]
    printf("Input n:");
    scanf("%d",&n);
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("Open Error.");
    	exit(0);
	}
	
	printf("Output:\n");
	
	//此版本如下部分做改动：使用文件操作框架的固定写法 结合 i计数器控制输出字符的个数 
	i=0;
	while((!feof(fp))&&i<n){
		ch=fgetc(fp);
		putchar(ch);
		i++;
	}

    
    fclose(fp);
    return 0;
}
