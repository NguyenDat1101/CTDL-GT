#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;	
	struct Node* pNext;
}NODE;

typedef struct List {
	NODE* pHead;
	NODE* pTail;
}LIST;

void KhoitaoLIST(LIST *l){
	l->pHead = NULL;
	l->pTail = NULL;
}

void ChenCuoi(LIST* l, NODE* new_ele){
	if (l->pHead == NULL){
		l->pHead = new_ele;
		l->pTail = l->pHead;
	} else {
		l->pTail->pNext = new_ele;
		l->pTail = new_ele;
	}
}

NODE* createNODE(int dulieu){
	NODE* newNODE = (NODE*)malloc(sizeof(NODE));
	if(newNODE != NULL){
		newNODE->data = dulieu;
		newNODE->pNext = NULL;
	}
	return newNODE;
}

void InDS(LIST* a){
	NODE* current = a->pHead;
	while (current != NULL){
		printf("%d ->", current->data);
		current = current->pNext;
	}
	printf("NULL\n");
}

void DemSL(NODE a[], int n){
	int dem=0;
	for(int i=0; i<n; i++) dem++;
	printf("\nso luong cua cac phan tu ben trong mang la:%d", dem);
}

int main(){
	int n, value;
	LIST dslk;
	KhoitaoLIST(&dslk);
	
	printf("\nnhap so NODE muon khoi tao:");
		scanf("%d", &n);
		
	for(int i=0; i<n; i++){
		printf("\nnhap so nguyen bat ky cho NODE thu %d:", i+1);
			scanf("%d", &value);
		NODE* newNODE = createNODE(value);
			if(newNODE != NULL){
				ChenCuoi(&dslk, newNODE);
			}
	}
	InDS(&dslk);
	
return 0;
}
