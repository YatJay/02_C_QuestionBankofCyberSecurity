/*���һ���Ժ�ѡ�˵�Ʊ��ͳ�Ƴ��򡣼�����3����ѡ�ˣ����ֱַ�ΪLi��Zhang��Fun��
ʹ�ýṹ��洢ÿһ����ѡ�˵����ֺ͵�Ʊ����
��¼ÿһ��ѡƱ�ĵ�Ʊ���������ÿ����ѡ�����յĵ�Ʊ�����ṹ����Զ�������µĸ�ʽ��
struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

�����ʽ
��һ����һ������n����ʾ������n��ѡƱ��Ϣ�������롣��֤n������100��
�Ժ��n���У�ÿһ�а���һ��������ΪѡƱ�ĵ�Ʊ�ˡ���֤ÿһ����������Li��Zhang��Fun�е�ĳһ���� 

���
�����У��ֱ�ΪLi��Zhang��Funÿ�˵ĵ�Ʊ������ʽΪ�������������������һ��ð�ţ���������ѡ�˵ĵ�Ʊ����
��ע����β������С� */

/*
������
	ʹ��һ����ά�ַ������ȱ������������������������飬�� leader[j].name���жԱ�ƥ�䣬ƥ��ɹ������ 
�Ķ��汾 
	�Ķ��汾�У���ʹ�ö�ά����洢�������������������ѭ���������룻
	ÿ������һ��name���ͱ���leader[3]�ṹ��������� leader[j].name�ĶԱ� 
	�жϵ�ǰ��������һ��leader[j].nameƥ�䣬��ƥ��ɹ������ 
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

