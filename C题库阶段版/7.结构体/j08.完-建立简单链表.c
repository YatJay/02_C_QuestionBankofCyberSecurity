/*���������������ļ�����
���У�
1 2 3
�Ǽ�������ġ�*/
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
   //���²�ʹ��ѭ���������ص������ʼ����ʽ 
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
	//ѭ���������� 
   while (head!=NULL){  //ͷָ�벻Ϊ�վ�������ݲ���ͷָ�����ָ����һ����� 
      printf("%d ",head->data);
      head = head->next;
   }
   printf("\n");
}
