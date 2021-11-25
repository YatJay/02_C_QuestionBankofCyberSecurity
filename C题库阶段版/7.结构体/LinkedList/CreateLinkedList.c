#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int score;
    struct student *next;
} LinkList;//��ע��ֺţ�

LinkList *create(int n);
int main(void){
    LinkList *head = create(10);
    while(head->next != NULL) {
        head=head->next;  //ͷָ����� 
        printf("%d  ",head->score);  //�����ǰ���������� 
}
    return 0;
}

LinkList *create(int n){
    LinkList *head, *node, *end;//����ͷ�ڵ㣬��ͨ�ڵ㣬β���ڵ㣻
    head = (LinkList*)malloc(sizeof(LinkList));//�����ַ
    end = head;         //���ǿ�������ͷβ�ڵ�һ��
    for (int i = 0; i < n; i++){
        node = (LinkList*)malloc(sizeof(LinkList));
        scanf("%d", &node->score);
        end->next = node;
        end = node;
    }
    end->next = NULL;//��������
    return head;
}
