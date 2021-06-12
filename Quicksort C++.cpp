#include <iostream>
#include <ctime>
using namespace std;

void aleatorios(int vector[]){
	int numero=0;
	int ii=0;
	srand(time(NULL));
	for(ii=0;ii<10;ii++){
		numero=rand()%100;
		vector[ii]=numero;
	}
}

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
			int lista[10];
			int size = sizeof(lista)/sizeof(int);
			aleatorios(lista);
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
