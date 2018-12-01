#include"elem.h"

void imp_elem(elem e){
	printf("%d\t", e);
}


int es_menor(elem e1, elem e2){
	return e1<e2;
}

int son_igu(elem e1, elem e2){
	return e1 == e2;
}
