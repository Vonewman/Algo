#include <iostream>
#include <vector>
#include <stdio.h>
  
*/
void insertion_sort(int tab[], int n)
{
  int j, key, i;

  for (j = 1; j < n; ++j) {
    key = tab[j];
    i = j - 1;
    while ((i > -1) && (tab[i] > key)) {
      tab[i+1] = tab[i];
      i = i - 1;
    }
    tab[i+1] = key;
  }

}

void printArray(int tab[], int n)
{
    int i;
    for (i = 0; i < n; i++)
	cout << tab[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertion_sort(arr, n);
    printArray(arr, n);
    return 0;
}
