#include <stdio.h>
 
int linearSearch(int arr[], int size, int key)
{
    
    if (size == 0) {
        return -1;
    }
 
   
    if (arr[size - 1] == key) {
       
        return size - 1;
    }
    else {
        
        return linearSearch(arr, size - 1, key);
    }
}
 
