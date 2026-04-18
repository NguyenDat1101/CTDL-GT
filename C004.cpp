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

void selectionSort(int a[],int n)
{
	int min;
	for(int i=0; i<n-1; i++)
	{
		min = i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min]){
				min = j;
				hoanvi(&a[min], &a[i]);
			}
		}
	}
}

int main()
{
	int a[50], n;
	printf("\nnhap n:");
		scanf("%d", &n);
		
	nhapmang(a, n);
	xuatmang(a, n);
	selectionSort(a, n);
	xuatmang(a, n);
return 0;
}
