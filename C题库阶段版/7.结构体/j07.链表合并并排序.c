/*����a��b��������ÿ�������еĽڵ����ѧ�š��ɼ�����a��b���������еĽڵ������ѧ���������С�Ҫ�����������ϲ�������ѧ���������в������
�����ʽ
       ��һ���������ÿո����������n��m���ֱ��ʾa��b���������еĽڵ��������֤n��m��������100��
       ֮���n��ÿ���������ÿո�������������ֱ��ʾһ��ѧ����ѧ�źͳɼ���
       ����m��ÿ���������ÿո�������������ֱ��ʾһ��ѧ����ѧ�źͳɼ���
       ���뱣֤���еĽڵ���ѧ�Ÿ�����ͬ��
���
       �ϲ�֮���������е�����ÿ�������ÿո����*/
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
    /* ����a�����е�n��ѧ����Ϣ */
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
    /* ����b�����е�m��ѧ����Ϣ */
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
    /* �ϲ��������� */
    /******start******/
    
    /******end******/
    /* ���ϲ�������������� */
	p = head;
    while (p != NULL){
        printf("%d %d\n", p->num, p->score);
        p = p->next;
    }
    return 0;
}
