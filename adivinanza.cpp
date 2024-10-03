/* ADIVINA EL NUMERO */

#include <iostream>
#include <cstdlib> //Para randomizar
#include <ctime> //Para semilla de numeros aleatorios

using namespace std;

int main(){
	//Inicializar la semilla aleatoria
	srand(time(0));
	
	//Generacion del numero aleatorio
	int numeroAleatorio = rand() % 100+1;
	int intento;
	int intentos = 0;
	
	cout<<"*** JUEGO DE ADIVINANZA ***"<<endl;
	cout<< "Se eligio un numero entre 1 y 100. Adivinalo si podes!"<<endl;
	
	do{
		cout<<"Ingrese su intento: ";
		cin>>intento;
		intentos++;
		
		if( intento > numeroAleatorio ){
			cout<<"El numero es menor que "<<intento<<"."<<endl;
			cout<<'\n';
		}else if ( intento < numeroAleatorio ){
			cout<<"El numero es mayor que "<<intento<<"."<<endl;
			cout<<'\n';
		}else{
			cout<<"Felicidades!!! Adivinaste el numero en "<<intentos<<" intentos."<<endl;
		}
	}while(intento != numeroAleatorio);
	
	return 0;
	
	
	
	
}
