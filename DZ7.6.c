#include <stdio.h>

void aPrint(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	printf("%d ",arr[i]);;
}

void aSort_UpLD(int*arr,int n)
{
	int i,j;
	for(i = 0; j < n; ++i)
	{
		for(j = i; j < n; ++j)
		{
		    if(arr[i]%10 > arr[j]%10)
		    {
		int temp = arr[i];
		    arr[i] = arr[j];
		    arr[j] = temp;
			}
		}
	}
}

int main()
{
enum {aSize = 10};
int array[aSize] = {0};
    for(int i = 0; i < aSize; i++)
        scanf("%d", &array[i]);
    aSort_UpLD(array, aSize);
    aPrint(array, aSize);
	return 0;
}
