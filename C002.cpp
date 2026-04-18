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

void sapxepmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if (a[i] >= a[j]) hoanvi(&a[i], &a[j]);
		}
	}
}

void timkiemnhiphan(int a[], int n, int x)
{
  int mid, low = 0, high = n - 1, buoc = 0;

  do
  {
  	if (a[mid] == x)
    {
      printf("\ntim duoc %d o vi tri thu %d", x, mid);
      buoc++;
	}
    mid = (low + high) / 2;
    if (a[mid] < x)
    {
      low = mid + 1;
    }
    else 
    {
      high = mid - 1;
    }
  } while(low <= high);
  
	if (buoc > 0)
	{
		printf("\nso lan xuat hien cua %d la: %d", x, buoc);
    }
    else
	{
		printf("\n%d khong ton tai ben trong mang", x);
    }
}

int main(){
	int n, a[50], x;
	printf("\nnhap n:");
		scanf("%d", &n);
		
	nhapmang(a, n);
	xuatmang(a, n);
	sapxepmang(a, n);
	
	printf("\nnhap x can tim trong mang:");
		scanf("%d", &x);
		
	timkiemnhiphan(a, n, x);
return 0;
}
