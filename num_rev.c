/*
 ============================================================================
 Name        : num_rev.c
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
	int n,sum=0,d;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	printf("Reverse is %d",sum);
	return 0;
}