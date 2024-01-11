//1. Write a program to find out the max number from given array using function 
#include <stdio.h>    
     
int main()    
{    
    int i,length,max;
    int arr[] = {100, 11, 1, 75, 568};      
        
    length = sizeof(arr)/sizeof(arr[0]);    
    max = arr[0];    
        
    for (i = 0; i < length; i++) {     
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element : %d\n", max);    
    return 0;    
}    
