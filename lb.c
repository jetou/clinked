#include"stdio.h"
#include"stdlib.h"
#define LEN sizeof(struct student)
#define NULL ((void *)0)
struct student
{
int num;
int score;
struct student *next;
};

int n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1, *p2;
	n = 0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d, %d", &p1->num, &p1->score);
	head = NULL;
	while(p1->num != 0 )
	{
		n = n + 1;
		if(n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1; 
		p1 = (struct student *)malloc(LEN);
		scanf("%d, %d", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return(head);
}
void main()
{
	struct student *p, *q;
	q = creat();
	for (p=q;p;p=p->next){
		printf("%d, %d\n",p->num,p->score);
	}
}
