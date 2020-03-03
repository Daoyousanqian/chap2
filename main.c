#include<stdio.h>
#include<stdlib.h>

typedef char  *ptr_to_char   // delcares the identifier ptr_to_char to be a new name for the type pointer to character.
ptr_to_char  pointer1 ;   //declare pointer1 as the pointer to character

#define d_ptr_to_char  char *    // when use define, it only replace the definition.
d_ptr_to_char  a1, b1;                 // eg, equal to ******** char * a1, b1; ************* so only a is the pointer to character


int const  random1;
const int  random2;

int incrementPlus1(int a);
int neg(int a);

int main(void){
	
	int enterNum;
	int brace = 0;
	int ch;
	
	 char a[] = "asad"; // the difference between '  ' for char and  "  " is for string. 
	
	while (scanf("%d", &enterNum) ==1)
	{
		printf("the output is on decimal :%d\n", enterNum);
		printf("the output is on octal :%o\n", enterNum);
		printf("the output is on hexadecimal :%x\n", enterNum);
		printf("the output is on  char :%c\n", enterNum);
		printf("the output is on  char :%s\n", a);
		puts(a);
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