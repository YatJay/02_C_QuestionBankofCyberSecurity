/*已有a、b两个链表，每个链表中的节点包括学号、成绩，且a、b两个链表中的节点均按照学号升序排列。要求把两个链表合并，按照学号升序排列并输出。
输入格式
       第一行有两个用空格隔开的整数n和m，分别表示a和b两个链表中的节点个数。保证n和m均不超过100。
       之后的n行每行有两个用空格隔开的整数，分别表示一个学生的学号和成绩。
       最后的m行每行有两个用空格隔开的整数，分别表示一个学生的学号和成绩。
       输入保证所有的节点中学号各不相同。
输出
       合并之后升序排列的链表，每行两个用空格隔开*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
       int num;
       int score;
       struct node *next;
};
int main(){
    int n, m, i;
    struct node *heada, *taila, *headb, *tailb, *head, *tail, *p;
    heada = taila = headb = tailb = NULL;
    printf("Please input n m:[1-100]\n");
    scanf("%d%d", &n, &m);
    /* 读入a链表中的n个学生信息 */
    printf("Please input %d students' numbers and scores:\n", n);
    for (i = 0; i < n; i++){
		p = (struct node *)malloc(sizeof(struct node));
	    scanf("%d%d", &p->num, &p->score);
	    if (heada == NULL){
        	heada = taila = p;
        }
        else{
            taila->next = p;
            taila = p;
        }
    }
    taila->next = NULL;
    /* 读入b链表中的m个学生信息 */
    printf("Please input %d students' numbers and scores:\n", m);
    for (i = 0; i < m; i++){
    	p = (struct node *)malloc(sizeof(struct node));
        scanf("%d%d", &p->num, &p->score);
        if (headb == NULL){
            headb = tailb = p;
        }
        else{
            tailb->next = p;
            tailb = p;
        }
    }
    tailb->next = NULL;
    printf("Output:\nThe result is:\n");
    /* 合并两个链表 */
    /******start******/
    
    /******end******/
    /* 将合并后的链表进行输出 */
	p = head;
    while (p != NULL){
        printf("%d %d\n", p->num, p->score);
        p = p->next;
    }
    return 0;
}
