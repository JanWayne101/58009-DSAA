#include <iostream>  
using namespace std;  
  
 
int arr[] = { 5, 4, 3, 2, 1};  
int size = sizeof( arr) / sizeof (arr[0]);  
void reverseArr ( int arr[] , int num)  
{  
    if ( num == size)  
        return;  
      
     
    int elem = arr [ num];  
      
     
    reverseArr ( arr, num + 1);  
     
    arr [ size - num - 1] = elem;  
}  
  
int main ()  
{  
    int i;   
    cout << " Original elements of the arrays " << endl;  
    for ( int i = 0; i < size; i++)  
    {  
        cout << arr[i] << " ";  
    }  
      
    reverseArr (arr, 0);  
    cout << " \n Reverse elements of the array are: " << endl;  
    for ( int i = 0; i < size; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0;
}
