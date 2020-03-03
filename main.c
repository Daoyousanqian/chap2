#include<stdio.h>
#include<stdlib.h>

typedef char  *ptr_to_char;   // delcares the identifier ptr_to_char to be a new name for the type pointer to character.
ptr_to_char  pointer1 ;   //declare pointer1 as the pointer to character

#define d_ptr_to_char  char *    // when use define, it only replace the definition.
d_ptr_to_char  a1, b1;                 // eg, equal to ******** char * a1, b1; ************* so only a is the pointer to character


int const  random1;
const int  random2;
 
int *pi ;
int const *pci ;
int *const cpi ;
int const *const cpci ;






int incrementPlus1(int a);
int neg(int a);

int main(void){
	
	int enterNum;
	int brace = 0;
	int ch;
	int num1 = 10;
	int num2 = 11;
	int num3 = 12;
	int num4 = 13;
	int num5 = 14;
	pi = &num1;
	pci = &num2;
//	cpi = &num3;     // it will hint some error assignment of read-only variable ‘cpi’
//	cpci = &num4;   //  assignment of read-only variable ‘cpci’
   
	printf("the number of pi is  :%d\n", *pi);
	printf("the number of pi is  :%d\n", *pci);
	num2 = 20;
	printf("the number of pi is  :%d\n", *pci);
	
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