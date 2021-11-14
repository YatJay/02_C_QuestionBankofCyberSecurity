//从键盘上读入一行字符(约定：字符数≤127字节)，判断其中的注释是否合法，不合法则报错，合法时则删除注释后再输出。合法注释是指“/*”标记注释开始、“*/”标记注释结束，通常表现为/* ……*/。
//注意事项：
//　　(1)只考虑行内最多只包含一个注释的情况。
//　　(2)不合法的注释情况有很多种，例如 ……*/缺注释开始标记、/  * ……*/缺注释开始标记、/* ……缺注释结束标记、/* ……*  /缺结束标记。
//　　(3)编程可用素材：printf("input a string:")...、printf("Output:\nThe result is :")...、printf("Output:\ncomment is error\n")...。
//　　程序的运行效果应类似地如图1、图2、图3和图4所示，图1中的int main(void){char ch;/*ding yi*/ int i}、图2中的int main(void){char ch;ding yi*/ int i}、图3中的int main(void){char ch;/*ding yi* / int i}和图4中的int main(void){char ch; int i}是从键盘输入的内容。

/*
strcpy()的机制：
	 C 库函数 char *strcpy(char *dest, const char *src) 把 src 所指向的字符串复制到 dest所指向的位置。
	需要注意的是如果目标数组 dest 不够大，而源字符串的长度又太长，可能会造成缓冲溢出的情况。
*/
#include <stdio.h>
#include <string.h>
int findfirst(char str[128]);
int findlast(char str[128]);

int main(void)
{
	int first, last;
	char string[128];
	char result[128];
	
	printf("input a string:");
	gets(string);
	
	first = findfirst(string);  //first接收/*中/的位置 
	last = findlast(string);  //last接收*/下一个位置 
	strcpy(result, string);  //复制原来字符数组 
	
	if (first >= 0 && last >= 0){  //若查找成功则返回值均为正值，则进行字符串复制——从源地址复制到目标地址 
		strcpy(result + first, string + last);
	}
	
		//若   找到一对 /**/ 且符合规范              或 该字符串不含一对 /**/ 	均属于注释合规，可以进行输出 
	if (first >= 0 && last >= 0 && last >= first + 4 || first == -1 && last == -1){  
		printf("Output:\nThe result is :");
		puts(result);
	}
	else{
		printf("Output:\ncomment is error\n");
	}
	return 0;
}

int findfirst(char str[128]){  //findfirst()函数查找首次出现的/* ，查找成功返回 /* 所在位置 ，此举保证strcpy()的目标地址为 / 所在处 
	int i;
	
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == '/' && str[i + 1] == '*'){
			return i;
		}
	}
	return  (-1);  //未找到 /* 则返回-1 
}
int findlast(char str[128]){  //findlast()函数查找首次出现的*/，查找成功返回  */ 下一个位置 ，此举保证strcpy()的源地址为 */后第一个字符 
	int i;
	
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == '*' && str[i + 1] == '/'){
			return i + 2;
		}
	}
	return (-1);  //未找到 */ 则返回-1 
}
