#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j;
void inputarray(int a[], int n)
{
    for(i = 0; i < n; i++)
	{
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
 
void outputarray(int a[], int n)
{
    for(i = n-1; i >= 0; i--)
	{
        printf("%5d", a[i]);
    }
}

int main()
{
	int i,j;
    int a[100];
    int n;
    printf("\nNhap so luong phan tu trong mang n = ");
    do
	{
        scanf("%d", &n);
        if(n <= 0)
		{
            printf("\nNhap lai n = ");
        }
    }
	while(n <= 0);
    
    inputarray(a, n);
    printf("\nMang dao nguoc la: ");
    outputarray(a, n);   
    
}
