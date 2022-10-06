#include <stdio.h>
void main()
{
    int position, i, n, value,ch;
    printf("First enter number of elements :\n");
    scanf("%d", &n);
    int arr[n];
   for(i = 0; i < n; i++)
    {
        printf("value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    value=arr[n-1];
    printf("Element %d is deleting at %d index \n",value,n-1);
    n=n-1;
    printf("New Array after deleting element at end \n ");
    for(i = 0; i < n; i++)
    {
       printf("%d \t",arr[i]);
    }
}
