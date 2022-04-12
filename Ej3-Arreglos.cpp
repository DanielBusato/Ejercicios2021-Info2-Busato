//Ej3-Arreglos
#include <iostream>
using namespace std;

int main() {
	char f[]={"elefante"};
	float b[10],a[5];
	int g[5]={8};//) Inicialice en 8 cada uno de los 5 elementos del arreglo entero g.
	float c[100],suma=0;
	int i=0;
	
	// Despliegue el valor del séptimo elemento del arreglo de caracteres f.
	printf("%c\n",f[7]);
	
	//) Introduzca un valor en el elemento 4 del arreglo de punto flotante con un solo subíndice, b.
	b[4]=5;
	
	//Sume los elementos del arreglo de punto flotante c, el cual contiene 100 elementos.
	//En esta parte cuando hago un printf, me devuelve unos resultados erroneos, pero no todos son errores
	for(i=0;i<100;i++){
		c[i]=c[i]+i;
		//printf("%f\n",c[i]);
	}
	for(i=0;i<100;i++){
		suma=suma+c[i];
	}
	
	//Copie el arreglo a en la primera porción del arreglo b. Suponga que double a[ 11 ], b[ 34 ];
	for(i=0;i<5;i++){
		a[i]=b[i];
	}
	
	
	
	
	system("pause");
	return 0;
}

