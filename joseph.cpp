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
