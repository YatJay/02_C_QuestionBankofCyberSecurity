/*已知某银行整存整取存款不同期限的年息利率分别为：
3.15%期限一年，3.63%期限二年， 4.02%期限三年，
4.69%期限五年，5.36%期限八年。
从键盘上输入存钱的本金(以元为单位，必须定义为int且应考虑金额很大的情况，如果输入为负数，要提示用户输入非法)
和存款期限(只考虑1,2,3,5,8)，求到期时能从银行得到的利息(以元为单位，应考虑有小数，不计复利)。*/

#include <stdio.h>
int main(void){
    int bj,qx;
	double lx;
	
	printf("Please input benjin & qixian:");
	scanf("%d %d",&bj,&qx);
	switch(qx){
		case 1:
			lx=bj*0.0315*1;
			break;
		case 2:
			lx=bj*0.0363*2;
			break;
		case 3:
			lx=bj*0.0402*3;
			break;
		case 5:
			lx=bj*0.0469*5;
			break;
		case 8:
			lx=bj*0.0536*8;
			break;
		default:
			printf("\nInput error!");
			break;
	} 
    printf("Lixi is %.2f",lx);
    return 0;
}
