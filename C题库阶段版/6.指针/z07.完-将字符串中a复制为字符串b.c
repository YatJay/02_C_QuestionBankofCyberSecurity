/*假如有一个字符串a，通过函数gets键盘输入字符串a，然后把字符串a复制到字符串b，
字符串a的大小不超过30个字符。
要求：采用字符数组进行赋值：例如 b[i]=a[i];*/
#include <stdio.h>
int main()
{     
       char a[31], b[31];
       int i;
       printf("Please input a string a is:");
       gets(a);
       /******start******/
       for(i=0;a[i]!='\0';i++){
			b[i]=a[i];
		}
		b[i]='\0';
       /******end******/
       printf("Output:\n");
       printf("string b is:");
       for(i=0;b[i]!='\0';i++)
              printf("%c", b[i]);
       printf("\n");
       return 0;
}
