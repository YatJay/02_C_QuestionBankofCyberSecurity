/*��S=1/1��+1/2��+1/3��+��+1/N����������(��ʾʱС������ռ16λ������ʱҪ��ӵ�1�ʼ�����ۼ�)��NΪ������Ȼ��(ֻ����int��)���Ӽ��̶��롣*/

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
