#include<stdio.h>
#include<stdlib.h>

typedef char  *ptr_to_char;   // delcares the identifier ptr_to_char to be a new name for the type pointer to character.
ptr_to_char  pointer1 ;   //declare pointer1 as the pointer to character

#define d_ptr_to_char  char *    // when use define, it only replace the definition.
d_ptr_to_char  a1, b1;                 // eg, equal to ******** char * a1, b1; ************* so only a is the pointer to character


int const  random1;
const int  random2;

int initNum = 1212; 

int *pi ;                // an ordinary pointer;
int const *pci ;    //  can change pointer's value but not allow to change the value it points **** *pci = 30; wrong **** pci = & num3; right ********
int *const cpi =& initNum;    //  allow the change the vlaue it point but not allow to chage pointer's value;
int const *const cpci ;  // both do not allow; 






extern int incrementPlus1(int a);
extern int neg(int a);

int main(void){
	
	int enterNum;
	int brace = 0;
	int ch;
	int num1 = 10;
	int num2 = 11;
	int num3 = 12;
	int num4 = 13;
	int num5 = 14;
	char ch1;
	pi = &num1;
	pci = &num2;
//	cpi = &num3;     // it will hint some error assignment of read-only variable ‘cpi’
//	cpci = &num4;   //  assignment of read-only variable ‘cpci’
    
	
	
 // ****************************** the example of int const * pci *******************************************//  
	printf("the number of pi is  :%d\n", *pi);
	printf("the number of pci is  :%d\n", *pci);
	pci = &num3;
	printf("the number of pci is  :%d\n", *pci);
//  *pci = num3;	                                                  // can not change the value it points but pointers value could be changed  
//	printf("the number of pci is  :%d\n", *pci);

// ****************************** the example of int const * cpi *******************************************//
	printf("the number of cpi is  :%d\n", *cpi);
	*cpi = 3434;                                           
	printf("the number of cpi is  :%d\n", *cpi);
	
//	cpi = & num4;   assignment of read-only variable ‘cpi’
//	printf("the number of cpi is  :%d\n", *cpi);

// ****************************** the example of int const * cpi *******************************************//	
	
//*****************************to test the extern variable ***************************************************//
	extern int ex_number;
	printf("the external number is: %d\n", ex_number);
	
	
	char a[] = "asad"; // the difference between '  ' for char and  "  " is for string. 
	
// here is used to test********** while******** break  ****continue **********************8//

	while((ch1 = getchar()) != EOF){
		if (ch1 < '0' || ch1 > '9' )
		{
			printf("the input is: %c\n", ch1);
			continue;
		}
		else{
			
			printf("the input is a 0 to 9 : %c\n", ch1);
			break;
			
		}
	}
	
	
	
	
	
	
	
	
	
	
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