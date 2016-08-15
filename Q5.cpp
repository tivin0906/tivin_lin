#include <stdio.h>
#include <stdlib.h> 

int add_number(int );

int main (void)
{  
	int input = 0, sum = 0;

	do
	{
		printf("Input a positive integer : ");	// int : -2,147,483,648 to 2,147,483,647
		scanf("%d",&input); 
	}while(input <= 0 || input > 2147483647); 
	
	sum = add_number(input);
	
	printf("Code1 is %d\n", sum);
	
	if(sum >= 10)
		sum = add_number(sum);
	
	printf("Code2 is %d", sum);
		
    return 0; 
}

int add_number(int num)
{
	int sum = 0;
	
	while(num != 0)
	{
		sum = sum + num%10;
		num = num/10;
	}
	
	return sum;
}
