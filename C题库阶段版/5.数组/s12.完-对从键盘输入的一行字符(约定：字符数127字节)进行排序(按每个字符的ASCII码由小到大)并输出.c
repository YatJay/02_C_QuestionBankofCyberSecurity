/* 对从键盘输入的一行字符(约定：字符数≤127字节)进行排序(按每个字符的ASCII码由小到大)并输出。
编程可用素材：printf("input the string: \n")...、printf("Output:")...。
程序的运行效果应类似地如图1所示，图1中的32679 dsg j7u6k dsvs346r23v5h@#sfsaf是从键盘输入的内容。*/

/*
改动版本：不使用gets()函数，而是使用getchar()实现对带空格字符串的输入 
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char a[128],temp;
    int i,j,len;
    printf("input the string: \n");
    gets(a);
    
    len=strlen(a);
	for(i=1;i<=len-1;i++){
		for(j=0;j<=len-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Output:%s",a);
    return 0;
}
