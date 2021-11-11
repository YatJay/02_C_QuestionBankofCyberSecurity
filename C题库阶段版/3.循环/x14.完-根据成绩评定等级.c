/*从键盘输入一个一百分制成绩，如果不在0～100范围内，则要求重新输入数据，直到输入的数据在0～100范围内。
将输入的数据转换成等级‘A’，‘B’，‘C’，‘D’，‘E’。
90分以上为‘A’，80～89分为‘B’，
70～79分为‘C’，60～69分为‘D’，
60分以下为‘E’，
要求使用switch、case、default语句，结果赋值给变量grade，并将变量grade的值输出到屏幕上。*/

#include <stdio.h>
int main(void){
    int score,x;
    char grade;
    do{
    	printf("please input the score(0-100): ");
    	scanf("%d",&score);
	}while(score<=0||score>=100);
	
	x=score/10;
	switch(x){
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;
		case 7:
			grade='C';
			break;
		case 6:
			grade='D';
			break;
		default:
			grade='E';
			break;
	}
    printf("score=%d,grade=%c\n",score,grade);
    return 0;
}
