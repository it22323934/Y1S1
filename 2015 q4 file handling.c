#include <stdio.h>
struct student{
    char id[20];
    /*float listening;
    float reading;
    float writing;
    float speaking;*/
    float mark[4];
};
int main(void)
{
    FILE *u;
    u=fopen("Test.txt","wb");
    if(u==NULL){
        printf("Cannot open");
    }
    struct student student[5];
    int i;
    int j;
    for(i=0;i<5;i++){
        printf("Enter student ID: ");
        scanf(" %s",student[i].id);
        /*printf("Enter marks for listening: ");
        scanf("%f",&student[i].listening);
        printf("Enter marks for reading: ");
        scanf("%f",&student[i].reading);
        printf("Enter marks for writing: ");
        scanf("%f",&student[i].writing);
        printf("Enter marks for speaking: ");
        scanf("%f",&student[i].speaking);*/
        for(j=0;j<4;j++){
            printf("Enter the marks for subject %d: ",j+1);
            scanf("%f",&student[i].mark[j]);
        }
    }
    fwrite(student,sizeof(struct student),5,u);
    fclose(u);
    u=fopen("Test.txt","rb");
    if(u==NULL){
        printf("Cannot open\n");
    }
    fread(student,sizeof(struct student),5,u);
    char pass[20];
    char fail[20];
    //printf("Student ID    Marks for listening   Marks for reading  Marks for writing  Marks for speaking");
    for(i=0;i<5;i++){
        /*printf("student ID:%s\n",student[i].id);
        //scanf(" %s",student[i].id);
        printf("marks for listening:%.2f\n",student[i].listening);
        //scanf("%f",&student[i].listening);
        printf("marks for reading:%.2f\n",student[i].reading);
        //scanf("%f",&student[i].reading);
        printf("marks for writing:%.2f\n",student[i].writing);
        //scanf("%f",&student[i].writing);
        printf("marks for speaking:%.2f\n",student[i].speaking);
        //scanf("%f",&student[i].speaking);*/
        printf("%s ",student[i].id);
        for(j=0;j<4;j++){
            printf("%.2f ",student[i].mark[j]);
            if(student[i].mark[j]>7.0){
            	strcpy(pass,student[i].id);
			}
            else{
                strcpy(fail,student[i].id);
            }
			printf("The passed students %s\n",pass);
        }
        //printf(" The passed students %s\n",pass);
        printf("\n");
    }
    //printf("The passed students %s\n",pass);
    //fread()
    fclose(u);
    return 0;
}
