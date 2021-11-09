/*已知某公司员工的保底薪水为500，某月所接工程的利润profit（整数）与利润提成的关系如下（计量单位：元）：
        profit≤1000　　　　　　　　　　 没有提成；
        1000＜profit≤2000　　　　　　　 提成10%；
        2000＜profit≤5000　　　　　　　 提成15%；
        5000＜profit≤10000　　　　　　　提成20%；
        10000＜profit　　　　　　　　　　提成25%。
　　请根据输入的利润计算员工的薪水。*/

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
