
#include <iostream>
using namespace std;
 
int main()
{
  int arr[30], size, i, insElem, count = 0;
 
  cout << "Enter the size of an array: ";
  cin >> size;
 
  cout << "Enter array elements:\n";
  for (i = 0; i < size; i++)
    cin >> arr[i];
 
  cout << "\nEnter element to be inserted: ";
  cin >> insElem;
  
  arr[i] = insElem;
 
  cout << "New Array after append:\n";
  for (i = 0; i < (size+1); i++)
      cout << arr[i] << " ";
 
  return 0;
}
