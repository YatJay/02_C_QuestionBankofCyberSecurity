//��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡�
//�����Զ���һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ���������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��
#include <stdio.h>
typedef union{  //����i���ַ�����ch[]����һ���ڴ� 
	int i;  
	char ch[sizeof(int)];
} CHI;
int main(void){
    CHI chi;
    int i;
    chi.i=1234;
    for(i=0;i<sizeof(int);i++){
    	printf("%02hhX ",chi.ch[i]);
	}
    return 0;
}
