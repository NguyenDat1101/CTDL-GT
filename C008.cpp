#include <stdio.h>
#include <stdlib.h>
typedef struct TNode{
	int data;
	struct TNode *pLeft, *pRight;
}TNODE;

typedef TNODE* TREE;

void NLR (TREE Root){
	if (Root != NULL){
		printf("%d\t", Root->data);
		NLR(Root->pLeft);
		NLR(Root->pRight);
	}
}

void LNR (TREE Root){
	if(Root != NULL){
		LNR(Root->pLeft);
		printf("%d\t", Root->data);
		LNR(Root -> pRight);
	}
}

void LRN (TREE Root){
	if (Root != NULL){
		LRN(Root->pLeft);
		LRN(Root->pRight);
		printf("%d\t", Root->data);
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

void CountNodes(TREE root, int* x){
	if (root != NULL){
		(*x)++;
		CountNodes(root->pLeft, x);
		CountNodes(root->pRight, x);
	}
}

int max(int a, int b){
	if (a>b) return a;
	return b;
}

int TreeHeight(TREE Root){
	if (Root == NULL){
		return -1;
	}
	int dosaubentrai = TreeHeight(Root->pLeft);
	int dosaubenphai = TreeHeight(Root->pRight);
	return max(dosaubentrai,  dosaubenphai) + 1;
}

int CountLeaves(TREE Root, int *x){
	if (Root != NULL) {
		if(Root->pLeft == NULL && Root->pRight == NULL) return (*x)++;
	CountLeaves(Root->pLeft, x);
	CountLeaves(Root->pRight, x);
	}
}

int main(){
	TREE caynhiphan = NULL;
	int n, x, SoLuongNode=0, SoLuongNodeLa=0;
	
	printf("\n nhap so luong Node cho cay nhi phan:");
		scanf("%d", &n);
	
	for(int i=0; i<n; i++){
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
	CountNodes(caynhiphan, &SoLuongNode);
	printf("\ntong so node trong cay la:%d", SoLuongNode);
	int docao = TreeHeight(caynhiphan);
	printf("\ndo cao cua cay nhi phan la:%d", docao);
	CountLeaves(caynhiphan, &SoLuongNodeLa);
	printf("\nso nut la trong cay nhi phan la:%d", SoLuongNodeLa);
return 0;
}
