//Ej1-Promedio
#include <stdio.h>

int main() {
	int a[10];
	int b,z,denominador=0,suma=0,prom=0;
	
	printf("ingrese los numeros\n");
	
	
	for(b=0;b<10;b++){
		
	scanf("%i",&a[b]);
	
	if(a[b]==9999){
		break;
	}
	suma=suma+a[b];
	denominador++;
	}
	
	prom=suma/denominador;
	
	printf("El promedio es %i",prom);
	
	
	scanf("%i",&z);
	return 0;
}

