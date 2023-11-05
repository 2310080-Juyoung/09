#include <stdio.h>
#include <stdlib.h>
#define size  5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, average;
	int sum;
	int grade[size];
	
	sum=0;
	for(i=0;i<size;i++)
	{
	printf("학생 성적을 입력하세요:");
	scanf("%d",&grade[i]);
	sum += grade[i];
}
	average = sum/size;
	printf("성적평균: %i\n", average);
	return 0;
}
