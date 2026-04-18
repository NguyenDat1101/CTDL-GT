#include <stdio.h>
void nhapmang(int a[50],  int n)
{
	for(int i=0; i<n; i++)
	{
		printf("a[%d]:", i);
			scanf("%d", &a[i]);
	}
}

void xuatmang(int a[50], int n)
{
	printf("\nmang da nhap la:");
	for(int i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void timkiemtuyentinh(int a[50], int x, int n)
{
	for(int i=0; i<n; i++)
	{
		if (x == a[i])
		{
			printf("\ntim thay %d o vi tri thu %d", x, i);
		}
		else 
		{
			printf("\n%d khong xuat hien ben trong mang!", x);
			break;
		}
	}
}

int main(){
	int n, a[50], x;
	printf("\nnhap n:");
		scanf("%d", &n);
		
	nhapmang(a,n);
	xuatmang(a,n);
	
	printf("\nnhap x can tim trong mang:");
		scanf("%d", &x);
		
	timkiemtuyentinh(a, x, n);
return 0;
}
