#include<stdio.h>
#include<stdlib.h>

int incrementPlus1(int a);
int neg(int a);

int main(void){
	
	int enterNum;
	int brace = 0;
	int ch;
	
	
	
	while (scanf("%d", &enterNum) ==1)
	{
		printf("the number is: %d\n ", incrementPlus1(enterNum));
		printf("the number is: %d\n ", neg(enterNum));
		
	}
	
	while ((ch = getchar()) != EOF){
		
		if (ch == '{')
			brace += 1;
		if (ch == '}')
		{
			if(brace == 0)
				printf("this is an extra closing brace!\n");
			else 
				brace -= 1;
		}
		
		
		
	}
	
	printf("the number is: %d\n ", incrementPlus1(10));
	printf("the number is: %d\n ", incrementPlus1(0));
	printf("the number is: %d\n ", incrementPlus1(-10));
	printf("the number is: %d\n ", neg(10));
	printf("the number is: %d\n ", neg(0));
	printf("the number is: %d\n ", neg(-10));
	//  eee
	
	return 0 ;
}