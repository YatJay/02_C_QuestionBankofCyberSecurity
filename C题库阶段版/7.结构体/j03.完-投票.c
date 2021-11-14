/*完成一个对候选人得票的统计程序。假设有3个候选人，名字分别为Li，Zhang和Fun。
使用结构体存储每一个候选人的名字和得票数。
记录每一张选票的得票人名，输出每个候选人最终的得票数。结构体可以定义成如下的格式：
struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

输入格式
第一行有一个整数n，表示以下有n张选票信息将会输入。保证n不大于100。
以后的n行中，每一行包含一个人名，为选票的得票人。保证每一个人名都是Li，Zhang和Fun中的某一个。 

输出
有三行，分别为Li，Zhang和Fun每人的得票数。格式为首先输出人名，其后输出一个冒号，最后输出候选人的得票数。
请注意行尾输出换行。 */

/*
本程序
	使用一个二维字符数组先保存输入的姓名，而后遍历数组，对 leader[j].name进行对比匹配，匹配成功则计数 
改动版本 
	改动版本中，不使用二维数组存储输入的姓名，而是在外循环当中输入；
	每轮输入一个name，就遍历leader[3]结构体数组进行 leader[j].name的对比 
	判断当前输入与哪一个leader[j].name匹配，若匹配成功则计数 
*/
/******start******/
#include <stdio.h>
#include <string.h>
struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
int main(){
/******end******/
	int i,n;
	char names[50][20];
	printf("Please input total number:");
	scanf("%d",&n);
	
	printf("Please input the cadidates' name:\n");
	for(i=0;i<n;i++){
		scanf("%s",names[i]);
	}
	
	for(i=0;i<n;i++){
		if(strcmp(names[i],leader[0].name)==0){
			leader[0].count++;
		}
		else if(strcmp(names[i],leader[1].name)==0){
			leader[1].count++;
		}
		else if(strcmp(names[i],leader[2].name)==0){
			leader[2].count++;
		}
	}
	
	printf("Output:\nThe result is:\n");
	for (i = 0;i < 3;i++)
	{
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}

