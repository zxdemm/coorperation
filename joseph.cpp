#include<stdio.h>
#include<stdlib.h>
using namespace std;
<<<<<<< HEAD
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

