int menosFreq(int v[], int N){
    int i,j,min=v[0], n=N, cont;
    for(i=0; i<N; i++){
        cont =0;
        for(j=0; j<N; j++){
            if(v[i] == v[j]) cont++;
        }
        if(cont<n){
            min=v[i];
            n=cont;
        }
    }
    return min;
}
