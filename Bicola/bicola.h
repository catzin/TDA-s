
typedef struct Nodo{
  elem dato;
  struct Nodo*ant;
  struct Nodo*sig;
}*ApNodo;

typedef struct CNodo{

  ApNodo izq;
  ApNodo der;

}*Bicola;

Bicola nueva(void);
int es_nuevaB(Bicola);
Bicola formarD(Bicola,elem);
Bicola formarI(Bicola,elem);
elem der(Bicola);
elem izq(Bicola);
Bicola desformarI(Bicola);
