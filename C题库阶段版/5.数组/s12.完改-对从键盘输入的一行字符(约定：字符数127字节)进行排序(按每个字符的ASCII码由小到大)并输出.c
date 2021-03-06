/* 对从键盘输入的一行字符(约定：字符数≤127字节)进行排序(按每个字符的ASCII码由小到大)并输出。
编程可用素材：printf("input the string: \n")...、printf("Output:")...。
程序的运行效果应类似地如图1所示，图1中的32679 dsg j7u6k dsvs346r23v5h@#sfsaf是从键盘输入的内容。*/

/*
答案： 不使用gets()函数，使用getchar()输入带空格的字符串
*/
#include <stdio.h>
int main(void)
{
	int i = 0, j, ch, len;
	char te;
	char str[128];

	printf("input the string: \n");
	ch=getchar();
	while (ch!='\n'&&ch!=EOF){
		str[i] = (char)ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
	len = i;
	for (i=0;i<len;i++){
		for(j=0;j<len-i-1;j++){
			if (str[j]>str[j+1]){
				te=str[j];
				str[j]=str[j+1];
				str[j+1]=te;
			}
		}
	}
	printf("Output:%s\n", str);
	return 0;
}
