#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int choose(int array[], int);

int main (void)
{  
	int total=412, num=412, i=0, j=0, n=5;
	int arr[total]={0}, rand_arr[num]={0};
	
	for(i=0; i<total; i++)	// Generate an array from 1 to 412
		arr[i] = i+1;
	
	puts("Array :");
	
    srand(time(NULL));		// 取得時間序列, 以時間序列當亂數種子
	for(i=0; i<total; i++)
	{
		j = rand()%num;			// Generate random number from 0 to num.
		rand_arr[i] = arr[j];
		arr[j] = arr[num-1];	// j-th number is replaced by the last number
		num--;					// Reduce the range of random number
		
		printf("%3d ", rand_arr[i]);
	}
	
	printf("\n\n%d-th Number is %d", n, choose(rand_arr, n));
	
    return 0; 
}

int choose(int array[], int n)
{
	return array[n-1];
}

