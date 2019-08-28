#include <stdio.h>
#include <stdlib.h>

void tri(int *tab, int tailleTab){
  int i, j, key;

  for (j = 1; j < tailleTab; j++) {
    key = tab[j];
    i = j - 1;
    while(i > -1 && tab[i] > key) {
      tab[i+1] = tab[i];
      i = i - 1;
    }
    tab[i+1] = key;
  }
  
  for (int k = 0; k < tailleTab; k++)
    printf("%d\n", tab[k]);
}
int main(int argc, char *argv[]) {
  int tableau[6] = {5, 2, 4, 6, 1, 3};

  tri(tableau, 6);
  
  return 0;
}  
