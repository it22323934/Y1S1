#include <stdio.h>
#include <string.h>
int main(void){
	/*int no,i;
	FILE *r;
	r=fopen("Number705.txt","w");
	if(r==NULL){
		printf("Cannot open file\n");
	}
	for(i=0;i<5;i++){
		printf("Enter the Integer: ");
		scanf("%d",&no);
		fprintf(r,"%d",no);
		fprintf(r,"\n");
	}
	fclose(r);
	r=fopen("Number705.txt","r");
	if(r==NULL){
		printf("Cannot open the file\n");
	}
	fscanf(r,"%d",&no);
	while(!feof(r)){
		printf("%d\n",no);
		fscanf(r,"%d",&no);
	}
	fclose(r);
	return 0;*/
	int marks,i;
	char name[20];
	FILE *y;
	y=fopen("Marks805.txt","w");
	if(y==NULL){
		printf("Cannot open the file\n");
	}
	for(i=0;i<5;i++){
		printf("Enter the name: ");
		scanf("%s",name);
		printf("Enter the Marks: ");
		scanf("%d",&marks);
		fprintf(y,"%s %d",name,marks);
		fprintf(y,"\n");
	}
	fclose(y);
	y=fopen("Marks805.txt","r");
	if(y==NULL){
		printf("Cannot open the file\n");
	}
	fscanf(y,"%s %d",name,&marks);
	while(!feof(y)){
		printf("%s %d\n",name,marks);
		fscanf(y,"%s %d",name,&marks);
	}
	fclose(y);
	y=fopen("Marks805.txt","r");
	char key[20];
	int key2=0;
	printf("Enter name: ");
	scanf("%s",key);
	//printf("Enter marks: ");
	//scanf("%d",&marks);
	fscanf(y,"%s %d",name,&marks);
	while(!feof(y)){
		if(strcmp(key,name)==0){
			printf("Name is already present\n");
			//key2=2;
      key2++;
		}
		fscanf(y,"%s %d",name,&marks);
	}
	if(key2==0){
		printf("Name is not present\n");
	}
	fclose(y);
}