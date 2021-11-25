#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int score;
    struct student *next;
} LinkList;//（注意分号）

LinkList *create(int n);
int main(void){
    LinkList *head = create(10);
    while(head->next != NULL) {
        head=head->next;  //头指针后移 
        printf("%d  ",head->score);  //输出当前数据域内容 
}
    return 0;
}

LinkList *create(int n){
    LinkList *head, *node, *end;//定义头节点，普通节点，尾部节点；
    head = (LinkList*)malloc(sizeof(LinkList));//分配地址
    end = head;         //若是空链表则头尾节点一样
    for (int i = 0; i < n; i++){
        node = (LinkList*)malloc(sizeof(LinkList));
        scanf("%d", &node->score);
        end->next = node;
        end = node;
    }
    end->next = NULL;//结束创建
    return head;
}
