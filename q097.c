int maiorAB(ABin a){
	while(a->dir != NULL){
		a=a->dir;
	}
	return a->valor;
}
