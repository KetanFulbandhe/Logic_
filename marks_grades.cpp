//============================================================================
// Name        : marks_grades.cpp
// Author      : Ketankumar Fulbandhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	int Marks;
	printf("Enter Marks: ");
	scanf("%d",&Marks);
	if(Marks>=75)
	{
		printf("grade A ");
	}
	else if(Marks >=55)
		{
			printf("grade B ");
		}
	else if(Marks >=35)
	{
		printf("grade C");
	}
	else{
		printf("fail");
	}
	return 0;
}