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

void Delete(LinkList)
