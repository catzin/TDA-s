#include"bicola.h"

Bicola nueva(void){

  Bicola q = (Bicola)malloc(sizeof(struct CNodo));

  q -> izq = NULL;
  q -> der = NULL;


  return q;

}


int es_nuevaB(Bicola q){

  if((q -> izq == NULL)&&(q -> der == NULL)){

    return 1;
  }

  else{

    return 0;
  }

}

Bicola formarD(Bicola q, elem e){

  ApNodo t = (ApNodo)malloc(sizeof(struct Nodo));

    t -> dato = e;
    t -> ant  = NULL;
    t -> sig  = NULL;


    if(es_nuevaB(q)){

      q -> izq = t;
      q -> der = t;


    }

    else{

      q ->der -> sig = t;
     (q ->der -> sig)->ant = q ->der;
      q -> der = t;


    }


    return q;

}

Bicola formarI(Bicola q, elem e){

  ApNodo t = (ApNodo)malloc(sizeof(struct Nodo));

    t -> dato = e;
    t -> ant  = NULL;
    t -> sig  = NULL;


    if(es_nuevaB(q)){

      q -> izq = t;
      q -> der = t;


    }

    else{

      t -> sig  = q -> izq;
      q ->izq = t;


    }


    return q;

}


elem der(Bicola q){
  return  q -> der ->dato;
}

elem izq(Bicola q){

  return q -> izq ->dato;

}


Bicola desformarI(Bicola q){

  ApNodo t = q ->izq;

  if(q -> izq == q->der){

    q -> izq = q -> der = NULL;
  }

  else{

    q -> izq = q -> izq -> sig;

    q -> izq -> ant = NULL;
  }

  free(t);


  return q;

}
