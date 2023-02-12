#include <stdio.h>
int main(void)
{
	int fib[10]={0,1};
	int i;
	int sum;
	for(i=2;i<10;i++){
		//fib[i]=fib[i]+fib[i];
		//fib[i];
		fib[i]=fib[i-2]+fib[i-1];
		//sum=fib[i];
		//printf("%d ",sum);
	}
	for(i=0;i<10;i++){
		printf("fib[%d]=fib[%d]+fib[%d]\n",i,i-2,i-1);
		printf("%d ",fib[i]);
	}
	return 0;
	
}
