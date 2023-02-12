#include <stdio.h>
int main(void)
{
	int type;
	char pizza_size,payment_type,loyalty,online_order;
	int number_of_pizzas;
	float discount;
	float total,netamount;
	printf("Enter the type of pizza(1-classic rang,2-signature range,-1 to terminate the program): ");
	scanf("%d",&type);
	//printf("Enter the size of pizza(L-large and M-medium): ");
	//scanf(" %c",&pizza_size);
	//printf("Number of pizzas: ");
	//scanf("%d",&number_of_pizzas);
	while(type!=-1){
	//printf("Enter the size of pizza(L-large and M-medium): ");
	//scanf(" %c",&pizza_size);
	printf("Enter the size of pizza(L-large and M-medium): ");
	scanf(" %c",&pizza_size);
	printf("Number of pizzas: ");
	scanf("%d",&number_of_pizzas);
	if(type==1){
		if(pizza_size=='L'||pizza_size=='l'){
			total=(number_of_pizzas*1720.0)+total;
		}
		else if(pizza_size=='M'||pizza_size=='m'){
			total=(number_of_pizzas*975.0)+total;
		}
		else{
			printf("Invalid input\n");
		}
	}
	else if(type==2){
		if(pizza_size=='L'||pizza_size=='l'){
			total=(number_of_pizzas*1820.0)+total;
		}
		else if(pizza_size=='M'||pizza_size=='m'){
			total=(number_of_pizzas*1000.0)+total;
		}
		else{
			printf("Invalid input\n");
		}
	/*else{
		printf("Invalid input\n");*/
	}
	else{
		printf("Invalid input\n: ");
	}
	printf("Enter the type of pizza(1-classic rang,2-signature range,-1 to terminate the program): ");
	scanf("%d",&type);
	/*printf("Enter the size of pizza(L-large and M-medium): ");
	scanf(" %c",&pizza_size);
	printf("Number of pizzas: ");
	scanf("%d",&number_of_pizzas);*/
	}
	printf("Are you paying by credit card(Y/N): ");
	scanf(" %c",&payment_type);
	printf("Are you a loyalty customer(Y/N): ");
	scanf(" %c",&loyalty);
	printf("Is this an online order(Y/N): ");
	scanf(" %c",&online_order);
	printf("Total bill amount(Rs.): %.2f\n",total);
	if(payment_type=='Y'||payment_type=='y'){
		discount=total*0.20;
		netamount=total-discount;
		
	}
	else if(loyalty=='Y'||loyalty=='y'){
		discount=total*0.15;
		netamount=total-discount;
	}
	else if(online_order=='Y'||online_order=='y'){
		discount=total*0.05;
		netamount=total-discount;
	}
	else{
		discount=0.00;
		netamount=total;
	}
	/*else if(payment_type=='N'||payment_type=='n'){
		if(loyalty=='Y'||loyalty=='y'){
		discount=total*0.15;
		netamount=total-discount;
		}
		else if(loyalty=='N'||loyalty=='n'){
			if(online_order=='Y'||online_order=='y'){
			discount=total*0.05;
			netamount=total-discount;
			if(online_order=='N'||online_order=='n'){
				discount=0.00;
				netamount=total;
			}
			}
		}
	}*/
	
	printf("Discount(Rs.): %.2f\n",discount);
	printf("Net Amount(Rs.): %.2f\n",netamount);
}
