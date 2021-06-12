#include <iostream>
#include<time.h>
using namespace std;

void qs(int lista[], int limite_izq, int limite_der){
	int izq, der, temporal, pivote;
	
	izq = limite_izq;
	der = limite_der;
	pivote = lista[(izq+der)/2];
	
	do{
		while(lista[izq]<pivote && izq<limite_der)izq++;
		while(pivote<lista[der] && der > limite_izq)der--;
		if(izq <= der){
			temporal=lista[izq];
			lista[izq]=lista[der];
			lista[der]=temporal;
			izq++;
			der--;
		}
	} while(izq<=der);
	if(limite_izq<der){qs(lista,limite_izq,der);}
	if(limite_der>izq){qs(lista,izq,limite_der);}
}
	
	void quicksort(int lista[], int n){
		qs(lista,0,n-1);
	}
		
		int main(int argc, const char * argv[]){
			srand(time(NULL));
			int lista[10], i=0;
			for(i=0; i<10 ;i++){
				lista[i] = rand() % 100;
			}
			int size = sizeof(lista)/sizeof(int);
			
			printf("Esta es la lista desordenada \n");
			
			for(int i=0; i<size; i++){
				printf("%d", lista[i]);
				if(i<size-1)
					printf(",");
			}
			
			printf("\n");
			quicksort(lista,size);
			
			printf("Esta es la misma lista pero ordenada con el metodo Quicksort\n");
			for(int i=0; i<size; i++){
				printf("%d", lista[i]);
				if(i<size-1)
					printf(",");
			}
			return 0;
		}

