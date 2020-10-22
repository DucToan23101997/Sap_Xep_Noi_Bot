#include<stdio.h>
void nhap(int arr[] , int n)
{
   printf("\nChuoi nhap vao :");
   for(int i = 0 ; i < n ; i++)
   {
      scanf("%d",&arr[i]);
	}	
	
}

void xuat(int arr[] , int n)
{
   printf("\nChuoi nhap vao :");
   for(int i = 0 ; i < n ; i++)
   {
      printf("%4d",arr[i]);
	}	
	
}
void Sap_Xep_Noi_Bot(int arr[] , int n)
{
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0   ; j  < n - 1 -i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp ;
			}
			
		}
	}
}
int main()
{
	int arr[10] , n;
	printf("\nNhap n :");
	scanf("%d",&n );
	printf("\nNhap du lieu vao :");
	nhap(arr,n);
	printf("\nXuat Du lieu :");
	xuat(arr,n);
	Sap_Xep_Noi_Bot(arr,n);
	printf("\nSap Xep :");
	xuat(arr,n);
	return 0;
}
