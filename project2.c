/*
 ============================================================================
 Name        : project2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("enter two number\n");
	fflush(stdout);
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	printf("before swapping a=%d\t b=%d\n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("after swapping a=%d\t b=%d\n",num1,num2);
	return EXIT_SUCCESS;
}
