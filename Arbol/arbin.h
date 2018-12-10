#include"elem.h"

typedef struct a{

  elem raiz;
  struct a*der;
  struct a*izq;

}*Arbin;

Arbin vacio(void);
int Esvacio(Arbin);
elem raiz(Arbin);
Arbin Cons(elem,Arbin,Arbin);
Arbin izq(Arbin);
Arbin der(Arbin);
