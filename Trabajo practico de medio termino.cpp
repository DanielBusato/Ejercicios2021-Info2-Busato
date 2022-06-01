/*
Trabajo practico de medio termino.

Tema: Espejos curvos "Concavos y convexos". Fisica 1.

Se realizara un programa que devuelva la posicion(S'), naturaleza(imagen virtual o 
real, derecha o invertida) y tamaño de la imagen(Y') luego de que el usuario ingrese 
el tipo de espejo(concavo o convexo), su radio(r), posicion(S) y altura 
del objeto(Y).

Las ecuaciones para espejos son:

1/S+1/S´=1/f		

f(foco)=r/2

m(aumento)=Y´/Y=-S´/S

-----------------------------------------------------------------------------------------------------------------

IMAGENES EN UN ESPEJO CONCAVO
	Objeto mas lejos en el centro de curvatura(radio): Imagen real, invertida y mas pequeña.
	Objeto en el centro de curvatura: Imagen real, invertida y de igual tamaño.
	Objeto entre el centro de curvatura y el foco: Imagen real, invertida y de mayor tamaño.
	Objeto situado en el foco: No existe imagen.
	Objeto entre el foco y el espejo: Imagen virtual, derecha y de mayor tamaño.	
IMAGENES EN UN ESPEJO CONVEXO
	En los espejos convexos la imagen es siempre virtual, derecha y mas pequeña que el objeto.

Cuando S' es positiva, la imagen es real. Cuando es negativa es virtual.
Cuando Y' es positiva, la imagen es derecha. Cuando es negativa esta invertida.

*/
#include <iostream>
#include <stdio.h>
using namespace std;
struct objeto{			// se declara escructura donde se guardaran los datos del objeto ingresados por el usuario
	int tipo_espejo;
	float r;
	float S;
	float Y;
	
}objeto1;

struct imagen{			//Se declara estructura donde se guardaran los valores post proceso de la imagen resultante
	float Sprima;
	char naturaleza[10];
	float Yprima;
	
}imagen1;

void ingreso_datos(struct objeto *obj){		//Funcion que solicita el ingreso de datos y luego guarda los mismos
	
	printf("Ingrese tipo de espejo ingresando el numero referente(""1 para concavo/2 para convexo"")\n");
		scanf("%d",&objeto1.tipo_espejo);
	
	printf("Ingrese el radio(""metros"")\n");
		scanf("%f",&objeto1.r);
	
	printf("Ingrese la posicion(""metros"")\n");
		scanf("%f",&objeto1.S);
	
	printf("Ingrese la altura del objeto(""metros"")\n");
		scanf("%f",&objeto1.Y);

}

void proceso_datos_esp_concavo(struct objeto *obj, struct imagen *im){ 				//Funcion que procesa los datos para un espejo concavo y devuelve los resultados
	
	imagen1.Sprima=((objeto1.r/2)*objeto1.S)/(objeto1.S-(objeto1.r/2));
	imagen1.Yprima=(-(imagen1.Sprima)*objeto1.Y)/(objeto1.S);
	
	
	if(objeto1.r-(2*objeto1.S)!=0){			//casos para los cuales el objeto no esta posicionado sobre el foco
		printf("La distancia de la imagen es %.3f metros\n",imagen1.Sprima);
		printf("El tamaño de la imagen es %.3f metros\n",imagen1.Yprima);
		
		if(imagen1.Sprima<0 && imagen1.Yprima<0){
		printf("la imagen es virtual y esta invertida\n");
		}
		if(imagen1.Sprima<0 && imagen1.Yprima>0){
		printf("la imagen es virtual y esta derecha\n");
		}
		if(imagen1.Sprima>0 && imagen1.Yprima<0){
		printf("la imagen es real y esta invertida\n");
		}
		if(imagen1.Sprima>0 && imagen1.Yprima>0){
		printf("la imagen es real y esta derecha\n");
		}
	}
	if(objeto1.r-(2*objeto1.S)==0){ 		//En este caso el objeto esta posicionado sobre el foco
		printf("No existe imagen cuando el objeto esta posicionado sobre el foco\n");
	}
}


void proceso_datos_esp_convexo(struct objeto *obj, struct imagen *im){				//Funcion que procesa los datos para un espejo convexo y devuelve los resultados
	
	imagen1.Sprima=((objeto1.r/2)*objeto1.S)/(-(objeto1.S)-(objeto1.r/2));
	imagen1.Yprima=(-(imagen1.Sprima)*objeto1.Y)/(objeto1.S);
	
	printf("La distancia de la imagen es %.3f metros\n",imagen1.Sprima);
	printf("El tamaño de la imagen es %.3f metros\n",imagen1.Yprima);
	printf("la imagen es virtual y derecha\n");
	
}


int main(int argc, char *argv[]) {		//Funcion principal
	
	ingreso_datos(&objeto1);
	
	if(objeto1.tipo_espejo==1){
		proceso_datos_esp_concavo(&objeto1, &imagen1);
	}
	if(objeto1.tipo_espejo==2){
		proceso_datos_esp_convexo(&objeto1, &imagen1);
	}
	
	system("pause");
	return 0;
}

