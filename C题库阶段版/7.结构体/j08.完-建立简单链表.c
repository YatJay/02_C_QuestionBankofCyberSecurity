/*建立具有三个结点的简单链表。
其中：
1 2 3
是键盘输入的。*/
#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *next;
};
void output(struct node *head);
int main(){
   struct node a, b, c;
   struct node *head;
   printf("Input:\n");
   /******start******/
   //以下不使用循环，是朴素的链表初始化方式 
   scanf("%d %d %d", &a.data, &b.data, &c.data);
   head = &a;
   a.next = &b;
   b.next = &c;
   c.next = NULL;
   /******end******/
   printf("Output:\n");
   output(head);
   return 0;
}
void output(struct node *head)
{
	//循环访问链表 
   while (head!=NULL){  //头指针不为空就输出数据并将头指针后移指向下一个结点 
      printf("%d ",head->data);
      head = head->next;
   }
   printf("\n");
}
