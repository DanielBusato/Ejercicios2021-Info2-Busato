#include <stdio.h>
#include <time.h>


struct sensores{
	char t;
	int valor;
	unsigned long med;
}sensor1;


int main(int argc, char *argv[]) {
	int z;
	unsigned long aux=0;
	printf("Tama�o de memoria: %d\n",sizeof(sensor1));
	
	scanf("%d",&z);//Se pide ingresar un dato de tipo entero solo para pausar la ejecuci�n.
	return 0;
}

