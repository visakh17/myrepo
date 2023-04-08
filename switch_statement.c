/*
 ============================================================================
 Name        : switch_statement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num=0;
	printf("select your choice\n 1 for apple\n 2 for orange\n 3 for pineapple\n 4 for grape\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("entered no is :%d\n",num);
	fflush(stdout);
	switch(num)
	{
	case 1:
		printf("you have selected apple\n");
		fflush(stdout);
		break;
	case 2:
		printf("you have selected orange\n");
		fflush(stdout);
		break;
	case 3:
		printf("you have selected pineapple\n");
		fflush(stdout);
		break;
	case 4:
		printf("you have selected grape\n");
		fflush(stdout);
		break;
	default:
		printf("you have to read the list and select the option properly!!!!\n");
		fflush(stdout);

	}
	return EXIT_SUCCESS;
}
