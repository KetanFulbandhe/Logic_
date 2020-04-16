/*
 ============================================================================
 Name        : digit_sum.c
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
	int num,sum=0,dit=0;
	printf("Enter digit: ");
	scanf("%d",&num);
	while(num!=0)
	{
	dit=num%10;
	sum=sum+dit;
	num=num/10;
	}
	printf("sum %d",sum);
	return 0;
}