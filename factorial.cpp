//============================================================================
// Name        : factorial.cpp
// Author      : Ketankumar Fulbandhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	int num,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("factorial: %d",num);
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
			fact=fact*i;
		}
	printf("factorial :%d",fact);
	}
	return 0;
}