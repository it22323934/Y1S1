#include <stdio.h>
int main(void)
{
	int ratings[3][4];
	int i;
	int j;
	for(i=0;i<3;i++){
		printf("Movie %d\n",i+1);
		for(j=0;j<4;j++){
			printf("Rating of reviewer %d: ",j+1);
			scanf("%d",&ratings[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",ratings[i][j]);
		}
		printf("\n");
	}
	int sum;
	float avg[3];
	float avg1;
	//float max;
	int moviemax;
	for(i=0;i<3;i++){
		//sum=0;
		for(j=0;j<4;j++){
			sum=ratings[i][j]+sum;
			//sum=0;
		}
		printf("The sum for movie %d: %d\n",i+1,sum);
		avg1=sum/4.0;
		//avg[i]=avg1;
		/*if(avg1<max){
			max=avg1;
			moviemax=i+1;
		}*/
		printf("Average rating for movie %d: %.2f\n",i+1,avg1);
		sum=0;
		avg[i]=avg1;
	}
	for(i=0;i<3;i++){
		printf("%.2f ",avg[i]);
	}
	printf("\n");
	float max=avg[0];
	int maxmovie;
	int x;
	for(x=0;x<3;x++){
		if(max<avg[x]){
			max=avg[x];
			maxmovie=x+1;
		}
	}
	printf("The movie which has the highest ratings %d\n",maxmovie);
	printf("It has a average rating of %.2f\n",max);
	return 0;
}
