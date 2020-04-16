/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Ketankumar Fulbandhe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	int num,j=0,k=1,m;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("%d, %d, ",j,k);

	for(int i=0;i<num;i++)
		{
			if(m<num)
			{
				m=j+k;
				printf("%d, ",m);
				j=k;
				k=m;
			}
			else
			{
				break;
			}
		}
	return EXIT_SUCCESS;
}