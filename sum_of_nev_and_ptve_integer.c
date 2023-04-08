/*
 ============================================================================
 Name        : sum_of_nev_and_ptve_integer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {int size;
	printf("enter the size of array\n");
	fflush(stdout);
	scanf("%d",&size);
	int num[size],pos=0,neg=0;
	printf("Enter the values with respect to the size of array\n");
	fflush(stdout);
	for(register int i=0;i<size;i++)
		scanf("%d",&num[i]);
	for(register int i=0;i<size;i++)
	printf("\n you have entered the value in array is num[%d]=%d\t",i,num[i]);
	fflush(stdout);

	int sum=0,result=0;
	for(register int i=0;i<size;i++)
		if(num[i]>pos)
		{
			 sum=sum+num[i];
		}
		else if (num[i]<neg)
		{
			result=result+num[i];

		}
	printf("\nsum of pos=%d\t sum of neg=%d",sum,result);
	fflush(stdout);
	return EXIT_SUCCESS;
}
