/*
 ============================================================================
 Name        : highest_from.c
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
	printf("Enter 10 digit: ");
	int temp=0,num;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(temp<=num)
		{
			temp=num;
		}
	}
	printf("\nHighest is: %d",temp);
	return EXIT_SUCCESS;
}