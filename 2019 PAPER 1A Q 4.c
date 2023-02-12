#include <stdio.h>
int main(void)
{
	FILE *io;
	io=fopen("loyalty.dat","w");
	int id;
	char name[20];
	int i;
	int key;
  int status;
  char name2[20];
	for(i=0;i<2;i++){
		printf("Enter id: ");
		scanf("%d",&id);
		printf("Enter name: ");
		scanf(" %s",name);
		fprintf(io,"%d %s\n",id,name);
	}
	fclose(io);
	io=fopen("loyalty.dat","a+");
	if(io==NULL){
		printf("Cannot open file\n");
	}
	printf("Enter id number: ");
	scanf("%d",&key);
  /*printf("Enter name: ");
  scanf("%s",name2);*/
	fscanf(io,"%d %s",&id,name2);
  status=0;
	while(!feof(io)){
		if(key==id){
			printf("ID is already there\n");
      status++;
      //return 0;
		}
		/*else if(key!=id){
			printf("ID is not there\n");
		}*/
		/*else{
			printf("Enter name: ");
			scanf(" %s",name);
			fprintf(io,"%d %s\n",key,name);
		}*/
		fscanf(io,"%d %s",&id,name);
	}
  if(status==0){
    printf("Enter name: ");
    scanf("%s",name2);
    fprintf(io,"%d %s\n",key,name2);
  }
	//fclose(io);
	int id1;
	char name1[20];
	char response;
	printf("Do you want enter details of 5 people(Y/N): ");
  scanf(" %c",&response);
	if(response=='Y'||response=='y'){
	for(i=0;i<5;i++){
		printf("Enter id: ");
		scanf("%d",&id1);
		printf("Enter name: ");
		scanf("%s",name1);
		fprintf(io,"%d %s\n",id1,name1);		
	}
	}
	fclose(io);
}
