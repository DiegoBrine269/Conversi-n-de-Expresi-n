#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define TAM_ENT 7

/*Objetivo:
  Comenzando de una cadena, simular el ejercicio de las 
  vias del tren y obtener otra utilizando una pila.
*/

int main(){
  char salida[10000];
  
  int entrada[TAM_ENT] = {1,2,3,4,5,6,7};
  pila p;
  int err,tope,i;

  inic_pil(&p);
  
  /*Ciclo para todas las pruebas*/
  crea_pil(&p);
  
  for(i=0;i<TAM_ENT;i++)
  {
    if(i == 0 || i == 4)
    {
      push_pil(&p, entrada[i]);
    }
    
    if(i == 1 || i == 2 || i == 3 || i == 5 || i == 6)
    {
      push_pil(&p, entrada[i]);
      tope_pil(&tope, &p);
      printf(" %d ", tope);
      pop_pil(&p);

      if(i == 6)
      {
        tope_pil(&tope, &p);
        printf(" %d ", tope);
        pop_pil(&p);

        tope_pil(&tope, &p);
        printf(" %d ", tope);
        pop_pil(&p);
      }
    }
  }

  /*push_pil(&p, entrada[0]);

  push_pil(&p, entrada[1]);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  push_pil(&p, entrada[2]);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  push_pil(&p, entrada[3]);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  push_pil(&p, entrada[4]);

  push_pil(&p, entrada[5]);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  push_pil(&p, entrada[6]);
  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);

  tope_pil(&tope, &p);
  printf(" %d ", tope);
  pop_pil(&p);*/



  
  printf("\n");  //2, 3, 4, 6, 7, 5, 1
  elim_pil(&p);

  return 0;
}
