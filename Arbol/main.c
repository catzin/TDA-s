#include<stdio.h>
#include<stdlib.h>
#include"arbin.h"

int main(void){


  Arbin a = vacio();


  a = Cons(1,Cons(2,vacio(),vacio()),Cons(3,vacio(),vacio()));

  printf("Raíz del arbol:\n");
  imp_elem(raiz(a));
  printf("Raíz Sub-Arbol izquierdo:\n");
  printf("%d\n",a -> izq ->raiz);
  printf("Raíz del Sub-Arbol derecho:\n");
  printf("%d\n",a -> der -> raiz);

  return 0;
}
