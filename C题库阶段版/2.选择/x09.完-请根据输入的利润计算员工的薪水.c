/*��֪ĳ��˾Ա���ı���нˮΪ500��ĳ�����ӹ��̵�����profit����������������ɵĹ�ϵ���£�������λ��Ԫ����
        profit��1000�������������������� û����ɣ�
        1000��profit��2000�������������� ���10%��
        2000��profit��5000�������������� ���15%��
        5000��profit��10000�����������������20%��
        10000��profit�����������������������25%��
���������������������Ա����нˮ��*/

#include <stdio.h>
int main(void){
    double tc,salary;
    int lr;
    printf("Input profit: ");
    scanf("%d",&lr);
    
    if(lr<1000){
    	tc=0;
	}
	else if(lr>1000&&lr<=2000){
		tc=lr*0.1;
	}
	else if(lr>2000&&lr<=5000){
		tc=lr*0.15;
	}
	else if(lr>5000&&lr<=10000){
		tc=lr*0.2;
	}
	else if(lr>10000){
		tc=lr*0.25;
	}
	
	salary=500+tc;
	printf("Output:\nsalary=%.2f",salary);
    
    return 0;
}
