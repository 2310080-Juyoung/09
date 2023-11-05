#include <stdio.h>
#include <stdlib.h>
#define size  5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[size];
	
	printf("5명의 점수를 입력하세요.\n");
	
	
	for (i=0;i<size;i++)
		scanf("%d",&grade[i]);
		
	for (i=0;i<size;i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}
