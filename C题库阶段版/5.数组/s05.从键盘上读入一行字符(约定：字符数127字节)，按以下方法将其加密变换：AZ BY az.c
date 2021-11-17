/* 从键盘上读入一行字符(约定：字符数≤127字节)，按以下方法将其加密变换：
　　　　A->Z   　a->z
　　　　B->Y   　b->y
　　　　C->X   　c->x
　　　　……   　……
　　　　Z->A   　z->a
即字母A变成Z、字母B变成Y...，非字母字符不变。最后在屏幕上先显示这一行字符的长度，再显示生成的密文。
编程可用素材：printf("Please input string:")...、printf("Output:\nzi fu chuan chang du:...、printf("\nmi wen:...。
程序的运行效果应类似地如图1所示，图1中的sfasfk,lmw4tywerysfcvasgewr xfasftg是从键盘输入的内容*/

#include <stdio.h>
char encrypt(char ch);
int main(void){
    
    
    return 0;
}

char encrypt(char ch){
	char res;
	if(ch>='A'&&ch<='Z'){
		
	}
	else if(ch>='a'&&ch<='z'){
		
	}
}
