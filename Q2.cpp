#include <stdio.h>
#include <stdlib.h> 

int main (void)
{  
	char in;
	unsigned long long input=0;
	int flag=0, x=0x1, output=0, i=0;
	
	do
	{
		printf("Octal = o, Decimal = d, Hexadecimal = h : ");
		scanf(" %c",&in);

		if (in=='o' || in=='O')
		{
			flag=1;
			printf("Input number : 0");
			scanf("%llo",&input);
			printf("Input : %llo",input);
		}		
		else if (in=='d' || in=='D')
			{
				flag=1;
				printf("Input number : ");
				scanf("%llu",&input);
				printf("Input : %llu",input);
			}
			else if (in=='h' || in=='H')
				{
					flag=1;
					printf("Input number : 0x");
					scanf("%llx",&input);
					printf("Input : 0x%llx",input);
				}			
	}while(flag==0);

	printf("\nSupport Band : ");
	
	while(input!=0)
	{
		output=input&x;
		
		if(output==1)
			printf("%d ",i+1);
			
		input=input>>1;
		i++;
	}
		
    return 0; 
}

