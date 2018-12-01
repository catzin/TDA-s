
typedef list Queue;

int es_nueva(Queue q){
	return es_vacia(q);
}

Queue nueva(){
	return vacia();
}

Queue formar(Queue q, elem e){
	if(es_nueva(q))
		return cons(e,q);
	else
		return cons(cabeza(q),formar(resto(q),e));
}

elem primero(Queue q){
	return cabeza(q);
}

Queue desformar(Queue q){
	return resto(q);
}

void imp_Queue(Queue q){
	if(!es_vacia(q)){
		imp_elem(cabeza(q));
		imp_Queue(resto(q));
	}
}
