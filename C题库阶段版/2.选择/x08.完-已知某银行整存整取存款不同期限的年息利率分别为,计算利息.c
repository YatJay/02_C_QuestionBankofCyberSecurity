/*��֪ĳ����������ȡ��ͬ���޵���Ϣ���ʷֱ�Ϊ��
3.15%����һ�꣬3.63%���޶��꣬ 4.02%�������꣬
4.69%�������꣬5.36%���ް��ꡣ
�Ӽ����������Ǯ�ı���(��ԪΪ��λ�����붨��Ϊint��Ӧ���ǽ��ܴ��������������Ϊ������Ҫ��ʾ�û�����Ƿ�)
�ʹ������(ֻ����1,2,3,5,8)������ʱ�ܴ����еõ�����Ϣ(��ԪΪ��λ��Ӧ������С�������Ƹ���)��*/

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
