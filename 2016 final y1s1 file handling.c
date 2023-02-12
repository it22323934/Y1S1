#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int mark[5];
    int pass;
};
int main(void)
{
	FILE *ui;
	ui=fopen("marks.txt","wb");
	//char name[20];
	//int mark[4][5];
	if(ui==NULL){
		printf("Cannot open file\n");
	}
	struct student student[4];
    int i;
    int j;
    for(i=0;i<4;i++){
        printf("Enter student name: ");
        scanf("%s",student[i].name);
        for(j=0;j<5;j++){
            printf("Enter mark for subject %d: ",j+1);
            scanf("%d",&student[i].mark[j]);
        }
    }
    fwrite(student,sizeof(struct student),4,ui);
	fclose(ui);
	ui=fopen("marks.txt","rb");
	fread(student,sizeof(struct student),4,ui);
	for(i=0;i<4;i++){
    printf("%s ",student[i].name);
    //scanf("%s",student[i].name);
        for(j=0;j<5;j++){
            printf("%d ",student[i].mark[j]);
            //scanf("%d",&student[i].mark[j]);
        }
        printf("\n");
    }
    printf("\n");
    int count1,count2,count3,count4;
    int max;
    char maxstudent;
    for(i=0;i<4;i++){
    	printf("%s ",student[i].name);
    	for(j=0;j<5;j++){
    		if(student[i].mark>45){
    		//student[i].pass=0;
			student[i].pass=student[i].pass+1;
			//printf("%d\n",studeny)		
			}
			//printf(" the number passed %d",count1);			//printf("\n");
		}
		if(student[i].pass<max){
			strcpy(maxstudent,student[i].name);
		}
		printf(" the number passed %d\n",student[i].pass);
	}
	printf("The student who passed the highest number of subjects:%s",maxstudent);
    fclose(ui);
	
}
