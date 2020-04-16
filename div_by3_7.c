//============================================================================
// Name        : div_3&7.cpp
// Author      : Ketankumar Fulbandhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	int num;
	printf("Enter multiple of seven or three: ");
	scanf("%d",&num);
	if(num%3==0 && num%7==0)
	{
		printf("three-seven");
	}
	else if(num%3==0)
	{
		printf("three");
	}
	else if(num%7==0)
	{
		printf("seven");
	}
	return 0;
}