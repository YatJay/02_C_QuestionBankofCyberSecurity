/*����10������(���Ϊ1-10)�μӸ�ӽ����������6����ί��֣�ÿλ���ֵĵ÷ִӼ������룺
	����ʾ��Please input singer's score: ����
	�����������1�����ֵ�6λ��ί���(10���ƣ�����Ϊ���ͣ�����֮��ʹ�ÿո�ָ�)����2�����ֵ�6λ��ί���...�Դ����ơ�
	�����ÿλ���ֵ����յ÷�(�۳�һ����߷ֺ�һ����ͷֺ��ƽ���֣����յ÷ֱ���2λС��)��������յ÷��ɸߵ��͵�˳�����ÿλ���ֵı�ż����յ÷�*/

#include <stdio.h>
typedef struct singer{
	int num;
	int score[6];
	double avg;
}SINGER;

double avg(int arr[],int n);
int main(void){
    SINGER singer[10],temp;
    int i,j;
    printf("���������:\n");
	for(i=0;i<10;i++){  //˫ѭ���Ը�λ���ֵ� int score[6]Ԫ�ظ���ֵ 
		singer[i].num=i+1;
		for(j=0;j<6;j++){
			scanf("%d",&(singer[i].score[j]));
		}
	}
	
	printf("�����������:\n");  //���������� 
	for(i=0;i<10;i++){
		printf("No.%d: ",singer[i].num);
		for(j=0;j<6;j++){
			printf("%5d ",singer[i].score[j]);
		}
		putchar(10);
	}
	
	printf("ƽ���ּ���������:\n"); 
	for(i=0;i<10;i++){  //���ú�������ƽ���ֲ�д���λ���ֵ� double avgԪ��
		singer[i].avg=avg(singer[i].score,6);
	}
	for(i=0;i<10;i++){  //����������(��������ƽ��ֵ) 
		printf("No.%d: ",singer[i].num);
		for(j=0;j<6;j++){
			printf("%5d ",singer[i].score[j]);
		}
		printf(" %5.2f ",singer[i].avg);
		putchar(10);
	}
    
    //ð������ -- �Ը������ֵ�double avg Ԫ�ؽ������� 
    for(i=1;i<=10-1;i++){  //N��Ԫ��������Ҫ����N-1�֣����ѭ����1~N-1 
    	for(j=0;j<=10-i-1;j++){  //ÿһ��ѭ���ڲ���Ҫ�����������飬��������i��Ԫ���Ѳ���Ҫ���򣬹ʱ���ֻ��Ҫ�� 0~N-i-1 ������N-i��Ԫ�� 
    		if(singer[j].avg<singer[j+1].avg){
    			temp=singer[j];
    			singer[j]=singer[j+1];
    			singer[j+1]=temp;
			}
		}
	}
	printf("����������:\n");
	for(i=0;i<10;i++){
		singer[i].avg=avg(singer[i].score,6);
	}
	for(i=0;i<10;i++){
		printf("No.%d: ",singer[i].num);
		for(j=0;j<6;j++){
			printf("%5d ",singer[i].score[j]);
		}
		printf(" %5.2f ",singer[i].avg);
		putchar(10);
	}
	
    return 0;
}

////�˴����Ľ������轫��߷ֺ���ͷ����ڵ�����λ�����㣬ֻ���ڼ���ƽ����ʱ���ܺ�sum�м�ȥmax��min����ƽ��ֵ����
double avg(int arr[],int n){
    int sum=0,i;
    int min,max;
    double average;
	min=max=arr[0];
    for (i=0;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
        if (max<arr[i]){
            max=arr[i];
        }
        sum=sum+arr[i];
    }
    average=(double)((sum-min-max)/4.0);
    return average;
}
