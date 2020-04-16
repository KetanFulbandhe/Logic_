/*
 ============================================================================
 Name        : amstrong.c
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
	int num,sp,dit,sum=0;
	printf("Enter Number: ");
	scanf("%d",&num);
	sp=num;
	while(num!=0)
	{
	dit=num%10;
	sum=sum+dit*dit*dit;
	num=num/10;
	}
	//printf("num %d",num);
	if(sum==num)
		printf("amstrong");
	else
		printf("Natural number");
	return EXIT_SUCCESS;
}