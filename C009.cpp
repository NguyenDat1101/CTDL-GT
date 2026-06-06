#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct HangHoa{
	char mahang[10];
	char tenhang[20];
	int soluong;
	int dongia;
}Hanghoa;

typedef struct NodeHangHoa{
	HangHoa data;
	NodeHangHoa* pNext;
}Node;

typedef struct LIST {
	Node* pHead;
	Node* pTail;
}list;

void ListInit(LIST* l){
	l->pHead = NULL;
	l->pTail = NULL;
}

Node* createNode(HangHoa data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL){
		printf("\n loi cap phat bo nho");
		exit(0);
	}
	newNode->data = data;
	newNode->pNext = NULL;
	
return newNode;
}

void InsertNode (Node* newNode, LIST* l){
	if(l->pHead == NULL){
		l->pHead = newNode;
		l->pTail = l->pHead;
	}
	else 
	{
		l->pTail->pNext = newNode;
		l->pTail = newNode;	
	}
}

void InputData(HangHoa* hh){
	Node* TempNode = l.pHead;
	while(TempNode != NULL){
		printf("\n nhap ma hang hoa:");
			fgets(hh->mahang, sizeof(hh->mahang), stdin);
				hh->mahang[strcspn(hh->mahang, "\n")] = 0;
		printf("\n nhap ten hang hoa:");
			fgets(hh->tenhang, sizeof(hh->tenhang), stdin);
				hh->tenhang[strcspn(hh->tenhang), "\n"] = 0;
		printf("\n nhap so luong hang hoa:");
			scanf("%d", &hh->soluong);
		printf("\n nhap don gia hang hoa:");
			scanf("%d", &hh->dongia);
		
		TempNode = TempNode->pNext;
	}
}

void OutputData(LIST* l){
	Node* TempNode = l->pHead;
	int i = 1;
	printf("STT----Mahg----Tenhg----solg----dongia----thanhtien\n");
	while(TempNode != NULL){
		int thanhtien = ((TempNode->data.dongia)*(TempNode->data.soluong));
		printf("%d----%s----%s----%d----%d----%d\n", i, TempNode->data.mahang, TempNode->data.tenhang, TempNode->data.soluong, TempNode->data.dongia, thanhtien);
		i++;
		TempNode = TempNode->pNext;
	}
}

int main(){
	LIST dslkd;
	ListInit(&dslkd);
	int n;
	printf("\n nhap so luong hang hoa:");
		scanf("%d", &n);
	
	int c;
	while((c = getchar()) != '\n' && c != EOF);
	
	for(int i=0 ; i<n; i++){
		HangHoa data;
		printf("\n nhap thong tin cho hang hoa thu %d", i+1);
			InputData(dslkd);
		Node* hanghoa = createNode(data);
		InsertNode(hanghoa, &dslkd);

	}
	OutputData(&dslkd);
return 0;
}
