#include <stdio.h>
int main()
{
	int a,b;
	int sum =0, hieu =0, tich =0, thuong=0;
	printf("Nhap a: ");
	scanf("%d",&a );
	printf("Nhap b: ");
	scanf("%d",&b );
	sum = a + b;
	printf("tong 2 so la: %d \n",sum);
	hieu = a - b;
	printf("hieu 2 so la: %d \n",hieu);
	tich = a * b;
	printf("tich 2 so la: %d \n",tich);
	thuong = a / b;
	printf("thuong 2 so la: %d \n",thuong);
	return 0; 
 } 
