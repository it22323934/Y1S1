#include <stdio.h>
#include <string.h>
int calassigment(int mark1,int mark2,int mark3,int mark4);
int calpractical(int prac1,int prac2);
float finalmark(int assigment,int practical,int final);
char grade(float final_marks);
void printstudent(char name[],int id,float finalmark2,char grade2);
int main(void)
{
    int m1,m2,m3,m4,p1,p2,f;
    int finalassigment,finalpractical;
    float finalmarks1;
    char name1[20];
    int id2;
    printf("Enter student name: ");
    scanf("%s",name1);
    printf("Enter student ID: ");
    scanf("%d",&id2);
    printf("Enter the marks for Assigment 1: ");
    scanf("%d",&m1);
    printf("Enter the marks for Assigment 2: ");
    scanf("%d",&m2);
    printf("Enter the marks for Assigment 3: ");
    scanf("%d",&m3);
    printf("Enter the marks for Assigment 4: ");
    scanf("%d",&m4);
    finalassigment=calassigment(m1,m2,m3,m4);
    printf("The final marks for assigments: %d\n",finalassigment);
    printf("Enter marks for practical 1: ");
    scanf("%d",&p1);
    printf("Enter marks for practical 2: ");
    scanf("%d",&p2);
    finalpractical=calpractical(p1,p2);
    printf("The final marks for practicals: %d\n",finalpractical);
    printf("Enter marks for final exam: ");
    scanf("%d",&f);
    finalmarks1=finalmark(finalassigment,finalpractical,f);
    printf("The final marks: %.2f\n",finalmarks1);
    //char g;
    //strcpy(g,grade(finalmarks1));
    printf("The grade: %c\n",grade(finalmarks1));
    printstudent(name1,id2,finalmarks1,grade(finalmarks1));

    
}
int calassigment(int mark1,int mark2,int mark3,int mark4)
{
    int total=mark1+mark2+mark3+mark4;
    return total;
}
int calpractical(int prac1,int prac2)
{
    int totalprac=prac1+prac2;
    return totalprac;
}
float finalmark(int assigment,int practical,int final)
{
    float final2=(assigment*0.20)+(practical*0.30)+(final*0.50);
    return final2;
}
char grade(float final_marks)
{
    char result;
    if(final_marks>=85){
        result='A';
    }
    else if(final_marks>=75){
        result='B';
    }
    else if(final_marks>=65){
        result='C';
    }
    else if(final_marks<65){
        result='X';
    }
    return result;
}
void printstudent(char name[],int id,float finalmark2,char grade2)
{
    printf("Student name: %s\n",name);
    printf("Student ID: %d\n",id);
    printf("Final marks: %.2f\n",finalmark2);
    printf("Grade: %c\n",grade2);
}