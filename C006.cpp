#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sinhvien {
	char mssv[30];
	char hoten[30];
	float gpa;
}sv;

typedef struct Nodesv {
	sv data;
	struct Nodesv* pNext;
}NodeSv;

typedef struct list {
	NodeSv* pHead;
	NodeSv* pTail;
}List;

void taods(List* l, NodeSv* new_ele){
	if (l->pHead == NULL){
		l->pHead = new_ele;
		l->pTail = l->pHead;
	}
	else {
		new_ele->pNext = l->pHead;
		l->pHead = new_ele;
	}
}

NodeSv* createNODE(sinhvien sv){
	NodeSv* newNODE = (NodeSv*)malloc(sizeof(NodeSv));
	if (newNODE == NULL) return NULL;
	newNODE->data = sv;
	newNODE->pNext = NULL;
	
return newNODE;
}

sinhvien nhapsv(sinhvien* sv){
	printf("\nnhap ho va ten:");
	fflush(stdin);
		fgets(sv->hoten, sizeof(sv->hoten), stdin);
	if (strlen(sv->hoten) > 0) {
        sv->hoten[strcspn(sv->hoten, "\n")] = '\0';
    }
	printf("\nnhap mssv:");
	fflush(stdin);
		fgets(sv->mssv, sizeof(sv->mssv), stdin);
	if (strlen(sv->mssv) > 0) {
        sv->mssv[strcspn(sv->mssv, "\n")] = '\0';
    }
	printf("\nnhap diem trung binh:");
		scanf("%f", &sv->gpa);
}

void nhapnhieusv(sinhvien sv[], int n){
	for(int i=0; i<n; i++){
		nhapsv(&sv[i]);
//		NodeSv* p = createNODE(&sv[i]);
//	if (p != NULL) printf("\nSUCCESS!");
	}
}

void xuatsv(sinhvien* sv){
	printf("| %-20s | %-10s | %-5.2f |\n", sv->hoten, sv->mssv, sv->gpa);
}

void xuatnhieusv(sinhvien sv[], int n){
	printf("\n<----------------------------------------------->\n");
    printf("| %-20s | %-10s | %-5s |\n", "Ho Va Ten", "MSSV", "GPA");
    printf("<----------------------------------------------->\n");
	for(int i=0; i<n; i++){
		xuatsv(&sv[i]);
	}
}

int main(){
	int n;
	sinhvien sv[30];
	printf("\nnhap so sinh vien:");
		scanf("%d", &n);
	getchar();
	nhapnhieusv(sv, n);
	xuatnhieusv(sv, n);

return 0;
}
