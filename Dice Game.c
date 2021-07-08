#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i,num,total=0;
	char name[1000];
	printf("Won/lost message modefied\n");
	printf("What is your name?\n");
  	printf("> ");
  	scanf("%s",&name);
	printf("Hello, %s!\n",name);
	printf("Rolling the dice...\n");
	srand((unsigned int)time(NULL));
	for(i = 1;i <= 2;i++){
		num = rand()%6+1;
		printf("Die %d: %d\n",i+1,num);
		total +=  num;
	}
	printf("Total value:%d\n",total);
	if(total > 7)printf("%s won!\n",name);
  	else printf("%s lost…\n",name);
	return 0;
}

