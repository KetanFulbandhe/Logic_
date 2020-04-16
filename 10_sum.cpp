//============================================================================
// Name        : 10_sum.cpp
// Author      : Ketankumar Fulbandhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	int num,sum=0;
	printf("Enter numbers: ");
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("Sum is: %d",sum);
	return 0;
}