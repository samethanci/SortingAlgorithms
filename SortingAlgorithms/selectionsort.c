#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
 void selection(int array[],int size)
{
    int i,j,temp,min;
   
    for(i=0;i&lt;size-1;i++)
    {
        min=i;
        for(j=i+1;j&lt;size;j++)
        {       
            if(array[j]&lt;array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
    for(i=0;i&lt;size;i++)
        printf("%d ",array[i]);   
}
