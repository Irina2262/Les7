#include <stdio.h>

const int input_amount = 5;

int main()
{
int m[input_amount];

	for(int i = 0; i < input_amount; i++)
	    scanf("%d" , &m[i]);

int min = m[0];
	for (int i = 1; i < input_amount; i++)
	   if (m[i] < min)
	   min = m[i];
	printf("%d", min);    
	return 0;
}
