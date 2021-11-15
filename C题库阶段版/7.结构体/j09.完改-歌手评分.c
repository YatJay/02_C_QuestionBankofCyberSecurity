/*设有10名歌手(编号为1-10)参加歌咏比赛，另有6名评委打分，每位歌手的得分从键盘输入：
	先提示“Please input singer's score: ”，
	再依次输入第1个歌手的6位评委打分(10分制，分数为整型，分数之间使用空格分隔)，第2个歌手的6位评委打分...以此类推。
	计算出每位歌手的最终得分(扣除一个最高分和一个最低分后的平均分，最终得分保留2位小数)，最后按最终得分由高到低的顺序输出每位歌手的编号及最终得分*/

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
    printf("请进行评分:\n");
	for(i=0;i<10;i++){  //双循环对各位歌手的 int score[6]元素赋初值 
		singer[i].num=i+1;
		for(j=0;j<6;j++){
			scanf("%d",&(singer[i].score[j]));
		}
	}
	
	printf("评分情况如下:\n");  //输出评分情况 
	for(i=0;i<10;i++){
		printf("No.%d: ",singer[i].num);
		for(j=0;j<6;j++){
			printf("%5d ",singer[i].score[j]);
		}
		putchar(10);
	}
	
	printf("平均分计算结果如下:\n"); 
	for(i=0;i<10;i++){  //调用函数计算平均分并写入各位歌手的 double avg元素
		singer[i].avg=avg(singer[i].score,6);
	}
	for(i=0;i<10;i++){  //输出评分情况(附带各自平均值) 
		printf("No.%d: ",singer[i].num);
		for(j=0;j<6;j++){
			printf("%5d ",singer[i].score[j]);
		}
		printf(" %5.2f ",singer[i].avg);
		putchar(10);
	}
    
    //冒泡排序 -- 对各个歌手的double avg 元素进行排序 
    for(i=1;i<=10-1;i++){  //N个元素排序共需要进行N-1轮，外层循环从1~N-1 
    	for(j=0;j<=10-i-1;j++){  //每一轮循环内部需要遍历整个数组，但是最后的i个元素已不需要排序，故遍历只需要从 0~N-i-1 共遍历N-i个元素 
    		if(singer[j].avg<singer[j+1].avg){
    			temp=singer[j];
    			singer[j]=singer[j+1];
    			singer[j+1]=temp;
			}
		}
	}
	printf("排序结果如下:\n");
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

////此处作改进：无需将最高分和最低分所在的数组位置置零，只需在计算平均分时在总和sum中减去max和min在求平均值即可
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
