#ifndef _LINKEDLIST_H  // 一般是文件名的大写
#define _LINKEDLIST_H

// 引入stdio.h文件
#include <stdio.h>
#include <stdlib.h>

//定义结构体 
typedef struct student{
    int score;
    struct student *next;
} LinkList;//（注意分号）

//遍历链表
void traverseLinkedList(LinkList *head){
	LinkList *pCurrent = head;  //临时指针 
    while(pCurrent->next != NULL) {
    	pCurrent=pCurrent->next;  //临时指针指向下一个结点(当前所指向结点的next域中存的即是下一个结点的地址) ，先移动指针，因为头结点的数据域没内容，不能输出它的数据域 
    	printf("%d  ",pCurrent->score);  //输出当前数据域内容 
	}
}

//创建链表 
LinkList *createLinkedList(int n){
    LinkList *head, *node, *end;//定义头节点，普通节点，尾部节点；
    head = (LinkList*)malloc(sizeof(LinkList));//分配地址
    
	end = head;         //定义的临时指针和头指针指向的位置一样，指向头结点 
	printf("Input %d data:",n);
    for (int i = 0; i < n; i++){
        node = (LinkList*)malloc(sizeof(LinkList));  //申请一块LinkList内存空间 作为结点 
        scanf("%d", &(node->score));   //对结点数据域进行赋值 
        end->next = node;  //临时指针的next域即头结点的next域指向此node 
        end = node;  //
    }
    end->next = NULL;//最后一个结点的next域定义为NULL表示链表结束
    return head;  //返回头指针相当于返回了整个链表的地址 
}

//修改链表 
void modifyNode(LinkList *list,int n) {//n为第n个节点
    LinkList *pCurrent = list;  //临时指针 
    
    //以下循环获取第n结点的位置，即拿到指向第n结点的指针 
	int i = 0;
    while (i<n&&pCurrent!=NULL) {  //加&&pCurrent!=NULL 确保遍历不会超出此链表 
        pCurrent=pCurrent->next;  //遍历到n-1个节点处，访问第n-1结点的指针域，拿到第n结点的指针 
        i++;
    }
    
    //使用指针修改第n结点的数据域 
    if (pCurrent!=NULL) {
        puts("\nInput the data for modifying:");
        scanf("%d", &pCurrent->score);
    }
    else {  //上述遍历获得的第n结点的指针域为NULL，说明n已经超出链表中结点个数，第n结点不存在 
        puts("\nThis node does not exist!");
    }
}


//删除结点
void deleteNode(LinkList *list, int n){
    LinkList *pCurrent = list, *pre;  //临时指针、前驱结点位置 
    
    //此循环用于确定要删除的结点的位置 
	int i = 0;
    while (i<n&&pCurrent!=NULL) {  //遍历到n-1个节点处
        pre = pCurrent;  //in记录第n-1个结点的位置 
        pCurrent = pCurrent->next;  //pCurrent记录第n个结点的位置 
        i++;
    }
    
    if (pCurrent != NULL) {
    	//先连后断 
        pre->next = pCurrent->next;  //第n-1个结点的指针域置为第n+1个结点的位置 
        free(pCurrent);  //释放第n个结点的内存 
    }
    else {
        puts("\nThis node does not exist!");
    }
} 


//插入结点 
void insertNode(LinkList *list, int n) {
    LinkList *pCurrent = list, *newNode;
    
    //以下循环用于定位要插入的位置 
	int i = 0;
    while (i < n && pCurrent != NULL) {  //遍历到第n-1个结点 
        pCurrent = pCurrent->next;  //拿到第n个结点的位置 
        i++;
    }
    
    if (pCurrent!=NULL) {
    	//申请新的内存空间并对该结点数据域初始化 
        newNode = (LinkList*)malloc(sizeof(LinkList));  
        puts("\nInput the data for inserting:");
        scanf("%d", &newNode->score);
        newNode->next = pCurrent->next;//填充newNode节点的指针域，也就是说把newNode的指针域指向第n+1个结点 
        pCurrent->next = newNode;//填充第n个结点的指针域，把第n个结点的指针域重新指向新结点newNode
    }
    else {
        puts("\nThis node does not exist!");
    }
}


#endif 
