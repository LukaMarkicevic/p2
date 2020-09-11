#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

Vozlisce* obrni(Vozlisce* zacetek) {

  Vozlisce* temp = zacetek;
  Vozlisce** sacuvaj = malloc(1000000 * sizeof(Vozlisce));
  Vozlisce** sacuvaj2 = malloc(1000000 * sizeof(Vozlisce));
  int i = 0;
  while (temp != NULL) {
    sacuvaj[i] = temp;
    temp = temp->naslednje;
    i++;
  }
  int z = 0;
  for (int j = i - 1; j >= 0; j--) {
    sacuvaj2[z] = sacuvaj[j];
    z++;
  }

  for(int j=0;j<i;j++){
    if(sacuvaj2[j]!=NULL){
      sacuvaj2[j]->naslednje=sacuvaj2[j+1];
    }
  }
  //sacuvaj2[i-1]->naslednje=NULL;

  return sacuvaj2[0];

}



int main() {
  return 0;
}


