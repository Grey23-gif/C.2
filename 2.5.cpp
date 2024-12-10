#include <stdio.h>
int main()
{
	int dai,rong;
	printf("Nhap chieu dai : ");
	scanf("%d",&dai );
	printf("Nhap chieu rong:  ");
	scanf("%d",&rong );
	
	printf("chu vi hinh chu nhat: (%d + %d )* 2 = %d\n",dai,rong,(dai + rong ) *2);
	printf("dien tich hinh chu nhat: %d * %d = %d \n",dai,rong,dai * rong );
	return 0; 
 } 
