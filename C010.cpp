#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct stack{
	char kytu[100];
	int top;
}STACK;

typedef struct node{
	STACK data;
	node* pNext;
}NODE;

typedef struct list{
	NODE* pHead;
	NODE* pTail;
}LIST;

void ListInit(LIST* l){
	l->pHead = NULL;
	l->pTail = NULL;
}

void StackInit(STACK* s){
	s->top = -1;
}

bool isEmpty(NODE* n){
	if (n->data.top == -1) return true;
	else return false;
}

int push(NODE* n, char x){
	if (n->data.top < 99){
			n->data.top++;
			n->data.kytu[n->data.top] = x;	
	} else if (n->data->top == 99){
		printf("\n Stack day");
		return -1;
	}
}

int pop(LIST* l){
	NODE* n = l->pHead;
	if (isEmpty(n) == true){
		printf("\n Da pop het phan tu!");
		return -1;
	} else {
		printf("\n Pop phan tu:%c", n->data.kytu[n->data.top]);
		
	}
}

NODE* CreateNode(STACK data){
	NODE* newNode = (NODE*)malloc(sizeof(NODE));
	if (newNode == NULL){
		printf("\n cap phat bo nho khong thanh cong");
		exit(0);
	}else {
		newNode->data = data;
		newNode->pNext = NULL;
	}
	return newNode;
}

void ThemCuoi(LIST* l, NODE* newNode){
	if (l->pHead == NULL){
		l->pHead = newNode;
		l->pTail = newNode;
	} else {
		l->pTail->pNext = newNode;
		l->pTail = newNode;
	}
}

void XoaBoNhoDem(){
	int c;
	while((c = getchar() != '\n' && c != EOF));
}

bool KiemTra(LIST* l){
	NODE* Temp = l->pHead; 
	while(Temp != NULL){
		if ( (Temp->data.kytu) == ('(' || '{' || '[') ){
			push(Temp, Temp->data.kytu);
		} else if ( (Temp->data.kytu) == (')' || '}' || ']') ){
			if(isEmpty(Temp) == true) return false;
			else if ( ((Temp->data.kytu == ')') != (Temp->pNext.data.kytu == '(')) || 
					  ((Temp->data.kytu == '}') != (Temp->pNext.data.kytu == '{')) ||
					  ((Temp->data.kytu == ']') != (Temp->pNext.data.kytu == '[')) ) return false;
			else {
					
			}
		}
	}
}

int main(){
}
