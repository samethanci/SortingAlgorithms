#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void bubble(int array[],int size)
{
    int i,j,temp;
    for(i=1;i&lt;size;i++)
    {
        for(j=0;j&lt;size-i;j++)
        {
            if(array[j]&gt;array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }   
        }       
    }
   
   
    for(i=0;i&lt;size;i++)
        printf("%d ",array[i]);
}
