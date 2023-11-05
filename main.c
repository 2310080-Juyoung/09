#include <stdio.h>
#include <stdlib.h>
#define size  5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int a[size] = {1,2,3,4,5};
	int b[size] = {1,2,3,4,5};
	int flag = 0;
	
	for (i=0;i<size;i++)
	{
		if(a[i]!=b[i])
		{
			printf("array a and b are not the same\n");
			flag=1;
		}
	}
	if (flag==0)
		printf("array a and b are the same\n");
	
	return 0;
}
