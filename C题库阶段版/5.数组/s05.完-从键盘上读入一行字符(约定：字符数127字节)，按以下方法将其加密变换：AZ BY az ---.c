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
#include <string.h>
char encrypt(char ch);
int main(void){
    char str[128];
    printf("Please input string:");
    gets(str);
    int i,len;
    len=strlen(str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
    		str[i]=encrypt(str[i]);
		}
	}
	printf("Output:\nzi fu chuan chang du:%d",len);
	printf("\nmi wen:%s",str);
    return 0;
}

char encrypt(char ch){
	char res;
	if(ch>='A'&&ch<='Z'){
		res='A'+25-(ch-'A');  //'A'+25即是'Z',ch-'A'即是ch和'A'之间相差的距离 
	}
	else if(ch>='a'&&ch<='z'){
		res='a'+25-(ch-'a');  //'a'+25即是'z',ch-'a'即是ch和'a'之间相差的距离 
	}
	return res;
}
