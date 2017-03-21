#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
  
void insertion(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i&lt;size;i++)
    {
        for(j=0;j&lt;i+1;j++)
        {
            if(array[j]&gt;array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i&lt;size;i++)
        printf("%d ",array[i]);   
}
 
 
 
int main(int argc, char *argv[]) {
    int dizi[]={9,4,6,2,8,1};
   
    bubble(dizi,6);
    puts("");
    selection(dizi,6);
    puts("");
    insertion(dizi,6);
    getch();
    return 0;
}
