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
�Ķ��汾 
	�Ķ��汾�У���ʹ�ö�ά����洢�������������������ѭ���������룻
	ÿ������һ��name���ͱ���leader[3]�ṹ��������� leader[j].name�ĶԱ� 
	�жϵ�ǰ��������һ��leader[j].nameƥ�䣬��ƥ��ɹ������ 
*/

#include <stdio.h>
#include <string.h>
struct person
{
        char name[20];
        int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main(){
    int n, i, j;
    char leader_name[20];
    printf("Please input total number:\n");
    scanf("%d", &n);
    printf("Please input the candidate's name:\n");
    for (i = 0; i < n; i++){
        scanf("%s", leader_name);
        for (j=0;j<3;j++)
            if (strcmp(leader_name, leader[j].name) == 0)
                leader[j].count++;
    }
    
    printf("Output:\nThe result is:\n");
    for (i = 0; i < 3; i++){
        printf("%s:%d\n", leader[i].name, leader[i].count);
    }
    return 0;
}
