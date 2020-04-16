/*
 ============================================================================
 Name        : after_5_num_11.c
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
	int num,i;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		printf("%d\n",num+i);
	}
	return 0;
}