#include <stdio.h>
#include <stdlib.h>
#define size  5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int score[size];
	int grade[size];
	
	for(i=0;i<size;i++)
		grade[i]=rand()%100;
	for(i=0;i<size;i++)
		score[i]=grade[i];
	
	for(i=0;i<size;i++)
		printf("score[%d]=%d(grade:%d)\n",i,score[i],grade[i]);
		
	return 0;
}
