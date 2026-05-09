#include <stdio.h>

typedef struct Node {
	int data[20];
	struct Node* pNext;
}NODE;

typedef struct List {
	NODE* pHead;
	NODE* pTail;
}LIST;

void ThemcuoiDS(NODE* pt){
	printf("\nnhap so nguyen bat ky:");
		scanf("%d", &pt->data);
}

typedef struct List {
	NODE* pHead;
	NODE* pTail;
}LIST;

void ChenCuoi(LIST* l, NODE* new_ele){
	if (l.pHead == NULL){
		l.pHead = new_ele;
		l.pTail = l.pHead;
	}
}

void InDS(Node* a[], int n){
	printf("\ncac phan tu da nhap trong mang la:");
	for(int i=0; i<n; i++){
		printf("%d", a[i]->data);
	}
}

void DemSL(Node a[], int n){
	int dem=0;
	for(int i=0; i<n; i++) dem++;
	printf("\nso luong cua cac phan tu ben trong mang la:%d", dem);
}

int main(){
	int n;
	Node songuyen[30];
	
	printf("\nnhap n:");
		scanf("%d", &n);
		
	ThemcuoiDS(songuyen);
//	InDS(songuyen, n);
	DemSL(songuyen, n);
		
return 0;
}
