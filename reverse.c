#include <stdio.h>
int main() 
{
    int arr[]={1,2,3,4,5,6,7};
    int start = 0;
    int end = 6;
    for(int i=0;i<7;i++)
    {
            if(start < end)
         {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
        for(int i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
return 0;
}
/*
7	6	5	4	3	2	1	
*/
