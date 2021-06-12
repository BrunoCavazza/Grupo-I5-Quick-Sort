#include <iostream>
#include <ctime>
using namespace std;
void aleatorios(int []);
int main(int argc, char *argv[]) {
	int array[10];
	int ii=0;
	aleatorios(array);
	for(ii=0;ii<10;ii++){
		printf("%d \t", array[ii]);
	}
	return 0;
}
void aleatorios(int vector[]){
	int numero=0;
	int ii=0;
	srand(time(NULL));
	for(ii=0;ii<10;ii++){
		numero=rand()%100;
		vector[ii]=numero;
	}
}
