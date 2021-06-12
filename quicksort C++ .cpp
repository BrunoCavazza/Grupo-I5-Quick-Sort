#include <iostream>
#include <ctime>
using namespace std;
//PROTOTIPADO DE FUNCIONES
void aleatorios(int []);
void qs (int [], int, int);
void quicksort(int [], int);
//INICIO DE LA FUNCION MAIN	
int main(int argc, const char * argv[]){
	int lista[10];
	int size = sizeof(lista)/sizeof(int);
	//LLamado a la funcion que genera el vector aleatorio
	aleatorios(lista);
	printf("Esta es la lista desordenada \n");
	for(int i=0; i<size; i++){
		printf("%d", lista[i]);
		if(i<size-1)
		printf(",");
	}
	printf("\n");
	//Llamado a la funcion recursiva
	quicksort(lista,size);
	printf("Esta es la misma lista pero ordenada con el metodo Quicksort\n");
	for(int i=0; i<size; i++){
		printf("%d", lista[i]);
		if(i<size-1)
		printf(",");
	}
	return 0;
}
//INICIO DE LAS FUNCIONES ANEXAS
	
//Esta funcion tendra la utilidad de proveernos un vector o lista de numeros
//aleatorios, vector que sera utilizado a lo largo del trabajo para ordenarlo
//por el metodo Quicksort
void aleatorios(int vector[]){
	int numero=0;
	int ii=0;
	srand(time(NULL));
	for(ii=0;ii<10;ii++){
		numero=rand()%100;
		vector[ii]=numero;
	}
}
	
//Esta funcion se encarga de la recursividad, es decir, de meter a la funcion
//en un ciclo que vaya ordenando los subvectores generados
void quicksort(int lista[], int n){
	//Llamado a la funcion encargada del ordenamiento
	qs(lista,0,n-1);
}
	
//Esta funcion sera la encargada del ordenamiento de la funcion
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
