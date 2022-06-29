#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Khai bao ham tinh tong
int add(int a,int b)
{
int add= a + b;
return add;
}
//Khai bao ham tinh hieu
int sub(int a, int b)
{
int sub = a - b;
return sub;
}
//Khai bao ham tinh nhan
int mul(int a, int b)
{
	int mul = a * b;
	return mul;	
}
//Khai bao ham tinh chia
float chia( float a, float b)
{
	float chia = a / b;
	return chia;
}

//ham chinh
int main() 
{
	int a,b;
	int menu;
	printf( " Nhap vao so a\n");
	scanf("%d",&a);
	printf( " Nhap vao so b\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Nhap vao lua chon:  \t 1.Phep tinh tong \t2.Phep tinh hieu \t3.Phep tinh nhan \t4.Phep tinh chia \n");
	scanf("%d", &menu);
	switch (menu)
	{
		case 1:
			printf("Phep tinh tong cua 2 so = %d", add(a,b));
			break;
			
		case 2:
			printf("Phep tinh hieu cua 2 so = %d", sub(a,b));
			break;
			
		case 3:
			printf("Phep tinh nhan cua 2 so = %d", mul(a,b));
			break;	
					
		case 4:
			printf("Phep tinh chia cua 2 so = %.2f", chia(a,b));
			break;		
	}
return 0;
}
