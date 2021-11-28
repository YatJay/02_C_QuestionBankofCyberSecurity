//枚举类型可以让数据更简洁，更易读——纯纯是为了让代码易读好看 
#include <stdio.h>
enum weekday{
	mon=1,tue,wed,thu,fri,sat,sun // mon=1表示从1开始计数 ，最后不用加分号 
};
int main(void){
	enum weekday day;  //day的数据类型是一个枚举类型，其本质是int
	printf("Please input day(1~7):");
	scanf("%d",&day); 
	
    switch(day){  //由于枚举类型本质上就是int ，因此可以如同int类型一样进行操作 
    	case mon:
    		printf("Monday\n");
    		break;
    	case tue:
    		printf("Tuesday\n");
    		break;
    	case wed:
    		printf("Wednesday\n");
    		break;
    	case thu:
    		printf("Thursday\n");
    		break;
    	case fri:
    		printf("Friday\n");
    		break;
    	case sat:
    		printf("Saturday\n");
    		break;
    	case sun:
    		printf("Sunday\n");
    		break;
    	default:
    		printf("Error!");
    		break;
	}
    
    return 0;
}
