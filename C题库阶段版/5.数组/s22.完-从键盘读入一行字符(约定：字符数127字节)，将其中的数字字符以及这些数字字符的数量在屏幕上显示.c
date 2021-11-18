/*从键盘读入一行字符(约定：字符数≤127字节)，将其中的数字字符以及这些数字字符的数量在屏幕上显示，
	注意：要求先显示这些数字字符的数量。
	编程可用素材：printf("Input:\nPlease input string:\n")...、printf("\nOutput:\nThe Digit Number is:...、printf("\nThe Digit Number is following:...。
  程序的运行效果应类似地如图1所示，图1中的this is a test!,ada12313 231 4*(*232 233是从键盘输入*/
  
#include <stdio.h>
#include <string.h>
int main(void){
    char str[128];
    int count=0,i;
    printf("Input:\nPlease input string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]>='0'&&str[i]<='9'){
    		count++;
		}
	}
	
	printf("\nOutput:\nThe Digit Number is %d",count);
	printf("\nThe Digit Number is following:");
	for(i=0;str[i]!='\0';i++){
    	if(str[i]>='0'&&str[i]<='9'){
    		printf("%c",str[i]);
		}
	}
    return 0;
}
