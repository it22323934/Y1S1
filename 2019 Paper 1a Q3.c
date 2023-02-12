#include <stdio.h>
#include <assert.h>
float calAnnualinterest(float interestrate,float amount);
float findtotalamount(float interestrate,float amount);
void testtotalamount();
int main(void)
{
    float invest,rate;
    float total;
    float compound_total;
    int i;
    printf("Enter the investment amount: ");
    scanf("%f",&invest);
    printf("Enter interest rate(in percentage): ");
    scanf("%f",&rate);
    total=findtotalamount(rate,invest);
    printf("Amount after year 1: %.2f\n",total);
    //testtotalamount();
    compound_total=total;
    for(i=0;i<4;i++){
    compound_total=findtotalamount(rate,compound_total);
    printf("Amount after year %d: %.2f\n",i+2,compound_total);
    //compound_total=findtotalamount(rate,total);
    //compound_total=total;
    //printf("The total investment for %d year: %.2f",i+1,total);
    }
    return 0;
}
float calAnnualinterest(float interestrate,float amount)
{
    float interest_amount;
    if(amount>1000000){
        interest_amount=amount*((interestrate/100)+0.005);
    }
    else if(amount<=1000000){
    interest_amount=amount*(interestrate/100);
    }
    return interest_amount;
}
float findtotalamount(float interestrate,float amount)
{
    float interest_amount1;
    float total;
    if(amount>1000000){
        interest_amount1=amount*((interestrate/100)+0.005);
        total=amount+interest_amount1;
    }
    else if(amount<=1000000){
            interest_amount1=amount*(interestrate/100);
            total=amount+interest_amount1;
    }
    return total;
}
void testtotalamount()
{
    testtotalamount(findtotalamount(10,1000000)==1100000);
    testtotalamount(findtotalamount(10,2000000)==2210000);
}
