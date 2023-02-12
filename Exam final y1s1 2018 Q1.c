#include <stdio.h>
int main(void)
{
    char course_type;
    int count=1;
    int countH=0;
    int countM=0;
    int countF=0;
    float total1=0;
    float total2=0;
    float total3=0;
    while(count<=100)
    {
        printf("Enter the course type(H-hospitality managemnt,M-marketing,F-finance): ");
        scanf(" %c",&course_type);
        if(course_type=='h'||course_type=='H')
        {
            total1=total1+1500.00;
            countH++;
        }
        else if(course_type=='M'||course_type=='m')
        {
            total2=total2+2000.00;
            countM++;
        }
        else if(course_type=='F'||course_type=='f')
        {
            total3=total3+2500.00;
            countF++;
        }
        else{
            printf("Invalid input\n");
            count--;
        }
        count++;
    }
    printf("The total number of registered students for Hospitality management:%d \ntotal registration fees(Rs.) for Hospitality management:%.2f\n",countH,total1);
    printf("The total number of registered students for Marketing:%d \ntotal registration fees(Rs.) for Marketing:%.2f\n",countM,total2);
    printf("The total number of registered students for Finance:%d \ntotal registration fees(Rs.) for Finance:%.2f\n",countF,total3);
    return 0;


}