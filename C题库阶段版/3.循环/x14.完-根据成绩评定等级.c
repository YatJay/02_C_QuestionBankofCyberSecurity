/*�Ӽ�������һ��һ�ٷ��Ƴɼ����������0��100��Χ�ڣ���Ҫ�������������ݣ�ֱ�������������0��100��Χ�ڡ�
�����������ת���ɵȼ���A������B������C������D������E����
90������Ϊ��A����80��89��Ϊ��B����
70��79��Ϊ��C����60��69��Ϊ��D����
60������Ϊ��E����
Ҫ��ʹ��switch��case��default��䣬�����ֵ������grade����������grade��ֵ�������Ļ�ϡ�*/

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
