#include<stdio.h>
int main(void)
{
	double quqntity,price,amount,discount;
	printf("Enter quantity and price:");
	scanf("%lf %lf",&quantity,&price);
	amount=quantity*price;
	if(cart_total>=$200)
	{
		cart_total=cart_total-$10;
	}
	elif(quantity>10)
	{
		cart_total=cart_total-5/100*cart_total;
		
	}
	elif(quantity>20)
	{
		cart_total=cart_total-10
	}
    printf("total amount:%d",cart_total);
    return 0;
}
