//从键盘上读入一行字符(约定：字符数≤127字节)，判断其中的注释是否合法，不合法则报错，合法时则删除注释后再输出。合法注释是指“/*”标记注释开始、“*/”标记注释结束，通常表现为/* ……*/。
//注意事项：
//　　(1)只考虑行内最多只包含一个注释的情况。
//　　(2)不合法的注释情况有很多种，例如 ……*/缺注释开始标记、/  * ……*/缺注释开始标记、/* ……缺注释结束标记、/* ……*  /缺结束标记。
//　　(3)编程可用素材：printf("input a string:")...、printf("Output:\nThe result is :")...、printf("Output:\ncomment is error\n")...。
//　　程序的运行效果应类似地如图1、图2、图3和图4所示，图1中的int main(void){char ch;/*ding yi*/ int i}、图2中的int main(void){char ch;ding yi*/ int i}、图3中的int main(void){char ch;/*ding yi* / int i}和图4中的int main(void){char ch; int i}是从键盘输入的内容。
//

#include <stdio.h>
#include <string.h>
int main(void){
	char *str;
	int len;
	printf("Input:");
	gets(str);
	len=strlen(str);
	
    
    return 0;
}
