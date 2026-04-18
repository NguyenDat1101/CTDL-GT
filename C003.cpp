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

void Insertionsort(int a[], int n)
{
	int pos, i, x;
	for(int i=1; i<n; i++)
	{
		x = a[i];
		pos = i - 1;
		while((pos >= 0)&&(a[pos]> x))
		{
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}

int main()
{
	int a[50], n;
	printf("\n nhap n:");
		scanf("%d", &n);
		
	nhapmang(a, n);
	xuatmang(a, n);
	Insertionsort(a, n);
	xuatmang(a,n);
return 0;	
}
