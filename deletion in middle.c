#include <stdio.h>
#include <conio.h>
void main ()
{
    int arr[50];
    int pos, i, num;
    printf (" \n Enter the number of elements: \n ");
    scanf (" %d", &num);
    printf (" \n Enter %d elements in array: \n ", num);
    for (i = 0; i < num; i++ )
    {   printf (" arr[%d] = ", i);
        scanf (" %d", &arr[i]);
    }
    printf( " The position where you want to delete: \n ");
    scanf (" %d", &pos);
    if (pos >= num+1)
    {
        printf (" \n Deletion is not possible in the array.");
    }
    else
    {
        for (i = pos - 1; i < num -1; i++)
        {
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]
        }
        printf (" \n The resultant array is: \n");
        for (i = 0; i< num - 1; i++)
        {
            printf (" arr[%d] = ", i);
            printf (" %d \n", arr[i]);
        }
    }
}
