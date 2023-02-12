#include <stdio.h>
int main(void)
{
    char package;
    char service;
    char response;
    float price=0;
    int count=0;
    float discount;
    float total;
    printf("Enter package: ");
    scanf(" %c",&package);
    if(package=='P'||package=='p'){
        do{
            printf("Enter service you want(H,F,C): ");
            scanf(" %c",&service);
            if(service=='H'||service=='h'){
                price=2000.0+price;
            }
            else if(service=='F'||service=='f'){
                price=2500.0+price;
            }
            else if(service=='C'||service=='c'){
                price=2200.0+price;
            }
            else{
                printf("Invalid input\n");
                count--;
            }
            printf("Do you want another service(Y or N): ");
            scanf(" %c",&response);
            count++;
        }while(response=='Y'||response=='y');
        if(count==2){
            discount=price*0.10;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else if(count==3){
            discount=price*20;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else{
        printf("The total: %.2f",price);
        }
    }
    if(package=='G'||package=='g'){
        do{
            printf("Enter service you want(H,F,C): ");
            scanf(" %c",&service);
            if(service=='H'||service=='h'){
                price=1900.0+price;
            }
            else if(service=='F'||service=='f'){
                price=2100.0+price;
            }
            else if(service=='C'||service=='c'){
                price=1800.0+price;
            }
            else{
                printf("Invalid input\n");
                count--;
            }
            printf("Do you want another service(Y or N): ");
            scanf(" %c",&response);
            count++;
        }while(response=='Y'||response=='y');
        if(count==2){
            discount=price*0.10;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else if(count==3){
            discount=price*20;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else{
        printf("The total: %.2f",price);
        }
    }
    if(package=='S'||package=='s'){
        do{
            printf("Enter service you want(H,F,C): ");
            scanf(" %c",&service);
            if(service=='H'||service=='h'){
                price=1750.0+price;
            }
            else if(service=='F'||service=='f'){
                price=1900.0+price;
            }
            else if(service=='C'||service=='c'){
                price=1700.0+price;
            }
            else{
                printf("Invalid input\n");
                count--;
            }
            printf("Do you want another service(Y or N): ");
            scanf(" %c",&response);
            count++;
        }while(response=='Y'||response=='y');
        if(count==2){
            discount=price*0.10;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else if(count==3){
            discount=price*20;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else{
        printf("The total: %.2f",price);
        }
    }
    if(package=='B'||package=='b'){
        do{
            printf("Enter service you want(H,F,C): ");
            scanf(" %c",&service);
            if(service=='H'||service=='h'){
                price=1600.0+price;
            }
            else if(service=='F'||service=='f'){
                price=1700.0+price;
            }
            else if(service=='C'||service=='c'){
                price=1500.0+price;
            }
            else{
                printf("Invalid input\n");
                count--;
            }
            printf("Do you want another service(Y or N): ");
            scanf(" %c",&response);
            count++;
        }while(response=='Y'||response=='y');
        if(count==2){
            discount=price*0.10;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else if(count==3){
            discount=price*20;
            total=price-discount;
            printf("The total: %.2f",total);
        }
        else{
            printf("The total: %.2f",price);
        }
}
}