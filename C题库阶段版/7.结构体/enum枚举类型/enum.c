//ö�����Ϳ��������ݸ���࣬���׶�����������Ϊ���ô����׶��ÿ� 
#include <stdio.h>
enum weekday{
	mon=1,tue,wed,thu,fri,sat,sun // mon=1��ʾ��1��ʼ���� ������üӷֺ� 
};
int main(void){
	enum weekday day;  //day������������һ��ö�����ͣ��䱾����int
	printf("Please input day(1~7):");
	scanf("%d",&day); 
	
    switch(day){  //����ö�����ͱ����Ͼ���int ����˿�����ͬint����һ�����в��� 
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
