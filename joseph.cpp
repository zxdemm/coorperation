#include<stdio.h>
#include<stdlib.h>
using namespace std;

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
