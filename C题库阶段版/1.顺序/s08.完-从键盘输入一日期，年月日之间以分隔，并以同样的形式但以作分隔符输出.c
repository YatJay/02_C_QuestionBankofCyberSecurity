/*从键盘输入一日期，年月日之间以“-”分隔，并以同样的形式但以“/”作分隔符输出。程序的运行效果应类似地如图1所示，图1中的2009-12-9是从键盘输入的内容。*/

#include <stdio.h>
int main(void){
    int yy,mm,dd;
    printf("Please input yy-mm-dd: ");
    scanf("%d-%d-%d",&yy,&mm,&dd);
    printf("\nOutput : %d/%d/%d",yy,mm,dd);
    
    return 0;
}
