#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i,num,total=0;
	printf("Rolling the dice...\n");
	srand((unsigned int)time(NULL));
	for(i = 1;i <= 2;i++){
		num = rand()%6+1;
		printf("Die %d: %d\n",i+1,num);
		total +=  num;
	}
	printf("Total value:%d\n",total);
	return 0;
}

