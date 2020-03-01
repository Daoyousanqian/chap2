#include<stdio.h>
#include<stdlib.h>

int incrementPlus1(int a);
int neg(int a);

int main(void){
	
	int enterNum;
	
	while (scanf("%d", &enterNum) ==1)
	{
		printf("the number is: %d\n ", incrementPlus1(enterNum));
		printf("the number is: %d\n ", neg(enterNum));
		
	}
	printf("the number is: %d\n ", incrementPlus1(10));
	printf("the number is: %d\n ", incrementPlus1(0));
	printf("the number is: %d\n ", incrementPlus1(-10));
	printf("the number is: %d\n ", neg(10));
	printf("the number is: %d\n ", neg(0));
	printf("the number is: %d\n ", neg(-10));
	
	return 0 ;
}