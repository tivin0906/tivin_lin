#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define MIN 10
#define MAX 412
#define SIZE MAX-MIN+1
#define DRAW 18

int *generate_random_list();
int choose(int *, int);

int main (void)
{  
	int *random_array;
	int i=0, position=3;
	
	random_array = generate_random_list();
	
	printf("Draw %d Random number from %d to %d  :\n", DRAW, MIN, MAX);
	for(i=0; i<DRAW; i++)
		printf("%03d ", *(random_array+i));
	
	printf("\n\n%d-th Number is %d", position, choose(random_array, position));
	
    return 0; 
}

int *generate_random_list()
{	
	int array_size=SIZE, i=0, rand_num=0;
	int *arr=new int[array_size];
	int *rand_arr=new int[DRAW];
	
	for(i=0; i<array_size; i++)						// Generate an array from MIN to MAX
		*(arr+i) = MIN+i;							// arr[MAX]={MIN, MIN+1, MIN+2, ..., MAX}
	
    srand(time(NULL));								// 取得時間序列time(NULL), 以時間序列當亂數種子
	for(i=0; i<DRAW; i++)
	{
		rand_num = rand()%array_size;				// Generate a random number from 0 to DRAW.
		*(rand_arr+i) = *(arr+rand_num);
		*(arr+rand_num) = *(arr+(array_size-1));	// rand_num-th number is replaced by the last number
		array_size--;								// Reduce the range of random number
	}
	delete [] arr;
	return rand_arr;
}

int choose(int *array, int index)
{
	return *(array+(index-1));
}

