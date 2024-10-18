// do while loop to output numbers 1-20
#include <stdio.h>
int main() {
	int i, sum=0, start, stop;
	printf("enter value when to start");
	scanf("%d", &start);
	printf("enter the value when to stop");
	scanf("%d", &stop);
	do{
	    printf("%d\n", i);
	    i++;
	    sum+=i;
	}while(i<stop);
	printf("the sum is%d", sum);
	
	
	return 0;
}