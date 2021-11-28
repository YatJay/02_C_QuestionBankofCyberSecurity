#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(void){
	int n,m;
	
	printf("Please input n:");
	scanf("%d",&n);
    LinkList *head = createLinkedList(n);
    printf("\nAfter creating:\n");
    traverseLinkedList(head);
	
	printf("\nInput the position for inserting(<=%d):",n);
	scanf("%d",&m);
	insertNode(head,m);
	printf("\nAfter inserting:\n");
	traverseLinkedList(head); 
    return 0;
}

