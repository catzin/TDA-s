#include"arbin.h"
#include<stdio.h>

Arbin vacio(void){

  return NULL;
}

int Esvacio(Arbin a){

  return a == NULL;

}

elem raiz(Arbin a){

  return a -> raiz;
}

Arbin Cons(elem e, Arbin i, Arbin d){

  Arbin t = (Arbin)malloc(sizeof(Arbin));

  t -> r = r;
  t -> i = i;
  t -> d = d;

  return t;

}

Arbin izq(Arbin a){

  return a -> izq;
}

Arbin der(Arbin a){

  return a -> der;
}
