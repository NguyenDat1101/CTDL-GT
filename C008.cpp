#include <stdio.h>
#include <stdlib.h>
typedef struct TNode{
	int data;
	struct TNode *pLeft, *pRight;
}TNODE;

typedef TNODE* TREE;

void NLR (TREE Root){
	if (Root != NULL){
		printf("%d", Root->data);
		NLR(Root->pLeft);
		NLR(Root->pRight);
	}
}

void LNR (TREE Root){
	if(Root != NULL){
		LNR(Root->pLeft);
		printf("%d", Root->data);
		LNR(Root -> pRight);
	}
}

void LRN (TREE Root){
	if (Root != NULL){
		LRN(Root->pLeft);
		LRN(Root->pRight);
		printf("%d", Root->data);
	}
}

TNODE* TaoNode(int x){
	TNODE* a = (TNODE*)malloc(sizeof(TNODE));
	if (a != NULL){
		a->data = x;
		a->pLeft = a->pRight = NULL;
	}
	return a;
}

void ThemNode(TREE* root, int x){
	if(*root == NULL){
		*root = TaoNode(x);
	} else {
		if (x < (*root)->data) ThemNode(&((*root)->pLeft), x);
		else if (x > (*root)->data) ThemNode (&((*root)->pRight), x);
	}
} 

int main(){
	TREE caynhiphan = NULL;
	int n, x;
	
	printf("\n nhap so luong Node cho cay nhi phan:");
		scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		printf("\nNhap gia tri Node thu %d:", i+1);
			scanf("%d", &x);
		ThemNode(&caynhiphan, x);
	}
	printf("\n Ket qua duyet cay NLR: ");
	NLR(caynhiphan);
	printf("\n Ket qua duyet cay LNR: ");
	LNR(caynhiphan);
	printf("\n Ket qua duyet cat LRN ");
	LRN(caynhiphan);

return 0;
}
