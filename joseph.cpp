#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct LNode{
int data;
struct LNode *next;
}LNode,*LinkList;

void Print(LinkList *list){
LNode *p,*s;
p = s = *list;
p = p->next;
while(p->next != s->next){
printf("%d ",p->next);
p = p->next;
}
printf("%d ",p->next);
p = p->next;
}

void Delete(LinkList *list,int n){ //É¾³ýµÚn¸öÊý 
	LNode *p,*s;
	p = *list;
	
	for(int i = 0; i < n; i++){
		p = p->next;
	}
	s = p->next;
	p->next = s->next;
	free(s);
}
void Create(LinkList *list, int num[], int n){
	LNode *head = (LNode*)malloc(sizeof(struct LNode));
	head->next = NULL;
	*list = head;
	LNode* pre = head;
	LNode* p;
	for(int i=0;i<n;i++){
		p = (LNode*)malloc(sizeof(struct LNode));
		p->data = num[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	pre->next = head->next;
}


void Insert(LinkList* list, int n, int m) {
	LNode* p;
	p = (LNode*)malloc(sizeof(struct LNode));
	p->data = n;
	LNode* q = *list;
	for (int i = 0; i < m; i++) {
		q = q->next;
	}
	p->next = q->next;
	q->next = p;

int isEmpty(LinkList* list) {
	LNode* p;
	p = *list;
	if (p->next == NULL) {
		return -1;
	}
	return 1;
}

void InitList(LinkList* list) {
	LNode* head = (LNode*)malloc(sizeof(struct LNode));
	head->next = NULL;
	*list = head;
}

void yuesefu(LinkList* list, int n) {
	LNode* p, * q;
	p = (*list)->next;
	do {
		for (int i = 0; i < n - 1; i++) {
			p = p->next;
		}
		q = p->next;
		p->next = p->next;
		p = p->next;
		free(q);
	} while (p != (*list)->next);
	printf("%d", p->data);
}}

