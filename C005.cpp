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

void hoanvi(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=n-1; j>0; j--)
		{
			if(a[j] < a[j-1]) hoanvi(&a[j], &a[j-1]);
		}
	}
}

int main()
{
	int a[50], n;
	printf("\n nhap n:");
		scanf("%d", &n);
	
	nhapmang(a, n);
	bubblesort(a, n);
	xuatmang(a, n);
	
return 0;
}
