#include <stdio.h>
#include <string.h>
void main()
{
    int i, n, value, ch;
    printf("enter the number of elements to add :");
    scanf("%d", &n);
    int arr1[n];
    for (i=0; i<n; i++)
    {
        printf("give values for array  ");
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number to insert  ");
    scanf("%d", &value);
    arr1[n]=value;
    printf("the new array\n");
    for (int j=0; j<n+1; j++)
    {
        printf("%d ", arr1[j]);
    }
    }


