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
  int low = 0, high = n - 1, buoc = 0;

  while(low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
      printf("\ntim duoc %d o vi tri thu %d", x, mid);
      break;
    }
    else if (a[mid] < x)
    {
      low = mid + 1;
    }
    else if (a[mid] > x) 
    {
      high = mid - 1;
    }
    else 
    {
      printf("\nso ban nhap khong ton tai ben trong mang");
      break;
    }
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
		
	xuatmang(a, n);
	timkiemnhiphan(a, n, x);
return 0;
}
