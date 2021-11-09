/*求S=1/1！+1/2！+1/3！+…+1/N！并输出结果(显示时小数部分占16位，计算时要求从第1项开始往后累加)。N为任意自然数(只考虑int型)，从键盘读入。*/

#include <stdio.h>
int main(void){
    int N,i,factor;
    double sum;
    printf("Input:\nPlease input n:");
    scanf("%d",&N);
    printf("Output:\n");
    
    for(i=1;i<=N;i++){
    	factor*=i;
    	sum+=1/(double)factor;
	}
    printf("S=1/1!+1/2!+...+1/%d!=%.16f\n",N,sum);
    return 0;
}
