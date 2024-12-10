#include <stdio.h>
int main()
{
	double bankinh, pi=3.14;
	printf("nhap ban kinh hinh tron: ");
	scanf("%lf",&bankinh);
	printf("chu vi hinh tron: %.1lf \n",2*pi*bankinh);
	printf("dien tich hinh tron: %.1lf",pi*(bankinh*bankinh));
	return 0; 
 } 
