#ifndef _LINKEDLIST_H  // һ�����ļ����Ĵ�д
#define _LINKEDLIST_H

// ����stdio.h�ļ�
#include <stdio.h>
#include <stdlib.h>

//����ṹ�� 
typedef struct student{
    int score;
    struct student *next;
} LinkList;//��ע��ֺţ�

//��������
void traverseLinkedList(LinkList *head){
	LinkList *pCurrent = head;  //��ʱָ�� 
    while(pCurrent->next != NULL) {
    	pCurrent=pCurrent->next;  //��ʱָ��ָ����һ�����(��ǰ��ָ�����next���д�ļ�����һ�����ĵ�ַ) �����ƶ�ָ�룬��Ϊͷ����������û���ݣ������������������ 
    	printf("%d  ",pCurrent->score);  //�����ǰ���������� 
	}
}

//�������� 
LinkList *createLinkedList(int n){
    LinkList *head, *node, *end;//����ͷ�ڵ㣬��ͨ�ڵ㣬β���ڵ㣻
    head = (LinkList*)malloc(sizeof(LinkList));//�����ַ
    
	end = head;         //�������ʱָ���ͷָ��ָ���λ��һ����ָ��ͷ��� 
	printf("Input %d data:",n);
    for (int i = 0; i < n; i++){
        node = (LinkList*)malloc(sizeof(LinkList));  //����һ��LinkList�ڴ�ռ� ��Ϊ��� 
        scanf("%d", &(node->score));   //�Խ����������и�ֵ 
        end->next = node;  //��ʱָ���next��ͷ����next��ָ���node 
        end = node;  //
    }
    end->next = NULL;//���һ������next����ΪNULL��ʾ�������
    return head;  //����ͷָ���൱�ڷ�������������ĵ�ַ 
}

//�޸����� 
void modifyNode(LinkList *list,int n) {//nΪ��n���ڵ�
    LinkList *pCurrent = list;  //��ʱָ�� 
    
    //����ѭ����ȡ��n����λ�ã����õ�ָ���n����ָ�� 
	int i = 0;
    while (i<n&&pCurrent!=NULL) {  //��&&pCurrent!=NULL ȷ���������ᳬ�������� 
        pCurrent=pCurrent->next;  //������n-1���ڵ㴦�����ʵ�n-1����ָ�����õ���n����ָ�� 
        i++;
    }
    
    //ʹ��ָ���޸ĵ�n���������� 
    if (pCurrent!=NULL) {
        puts("\nInput the data for modifying:");
        scanf("%d", &pCurrent->score);
    }
    else {  //����������õĵ�n����ָ����ΪNULL��˵��n�Ѿ����������н���������n��㲻���� 
        puts("\nThis node does not exist!");
    }
}


//ɾ�����
void deleteNode(LinkList *list, int n){
    LinkList *pCurrent = list, *pre;  //��ʱָ�롢ǰ�����λ�� 
    
    //��ѭ������ȷ��Ҫɾ���Ľ���λ�� 
	int i = 0;
    while (i<n&&pCurrent!=NULL) {  //������n-1���ڵ㴦
        pre = pCurrent;  //in��¼��n-1������λ�� 
        pCurrent = pCurrent->next;  //pCurrent��¼��n������λ�� 
        i++;
    }
    
    if (pCurrent != NULL) {
    	//������� 
        pre->next = pCurrent->next;  //��n-1������ָ������Ϊ��n+1������λ�� 
        free(pCurrent);  //�ͷŵ�n�������ڴ� 
    }
    else {
        puts("\nThis node does not exist!");
    }
} 


//������ 
void insertNode(LinkList *list, int n) {
    LinkList *pCurrent = list, *newNode;
    
    //����ѭ�����ڶ�λҪ�����λ�� 
	int i = 0;
    while (i < n && pCurrent != NULL) {  //��������n-1����� 
        pCurrent = pCurrent->next;  //�õ���n������λ�� 
        i++;
    }
    
    if (pCurrent!=NULL) {
    	//�����µ��ڴ�ռ䲢�Ըý���������ʼ�� 
        newNode = (LinkList*)malloc(sizeof(LinkList));  
        puts("\nInput the data for inserting:");
        scanf("%d", &newNode->score);
        newNode->next = pCurrent->next;//���newNode�ڵ��ָ����Ҳ����˵��newNode��ָ����ָ���n+1����� 
        pCurrent->next = newNode;//����n������ָ���򣬰ѵ�n������ָ��������ָ���½��newNode
    }
    else {
        puts("\nThis node does not exist!");
    }
}


#endif 
