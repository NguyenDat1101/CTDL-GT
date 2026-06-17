#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct stack{
	char kytu[100];
	int top;
}STACK;

void StackInit(STACK* s){
	s->top = -1;
}

bool isEmpty(STACK* n){
	if (n->top == -1) return true;
	else return false;
}

int push(STACK* n, char x){
	if (n->top < 99){
			n->top++;
			n->kytu[n->top] = x;
			printf("\n push phan tu: %c", n->kytu[n->top]);
	} else if (n->top == 99){
		printf("\n Stack day");
		return -1;
	}
}

char pop(STACK* n){
	if (isEmpty(n) == true){
		printf("\n Da pop het phan tu!");
		return -1;
	} else {
		char x = n->kytu[n->top];
		printf("\n Pop phan tu:%c", n->kytu[n->top]);
		n->top--;
		return x;
		
	}
}

bool KiemTraChuoi(char open, char close){
	if (open == '(' && close == ')') return true;
	if (open == '{' && close == '}') return true;
	if (open == '[' && close == ']') return true;
return false;
}

bool HamKiemTra(char* Kytu){
	STACK s;
	StackInit(&s);
	for(int i = 0; i<strlen(Kytu); i++){
		if (Kytu[i] == '(' || Kytu[i] == '{' || Kytu[i] == '['){
			push(&s, Kytu[i]);
		}
		else if (Kytu[i] == ')' || Kytu[i] == '}' || Kytu[i] == ']'){
			if (isEmpty(&s)) return false;
			char OpenChar = pop(&s);
			if (!KiemTraChuoi(OpenChar, Kytu[i])) return false;
			}
		}
return isEmpty(&s);
}

int main(){
	char Kytu[100];
	printf("\n nhap bieu thuc:");
		fgets(Kytu, sizeof(Kytu), stdin);
		Kytu[strcspn(Kytu, "\n")] = '\0';
	if (HamKiemTra(Kytu)){
		printf("\n chuoi hop le");
	} else {
		printf("\n chuoi khong hop le");
	}
return 0;
}
