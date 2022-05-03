#include <iostream>
using namespace std;
struct cliente{
	char apellido[15];
	char nombre[10];
	int numeroCliente;
	struct{
		char numeroTelefonico[11];
		char direccion[50];
		char ciudad[15];
		char estado[3];
		char codigopostal[6];
	}persona1;
}registroCliente, *ptrCliente;

int main(int argc, char *argv[]) {

	ptrCliente=&registroCliente;
	
	printf("Ingrese el apellido\n");
	scanf("%s",&registroCliente.apellido);
	printf("El apellido es : %s\n", ptrCliente->apellido);
	
	printf("Ingrese el nombre\n");
	scanf("%s",&registroCliente.nombre);
	printf("El apellido es : %s\n", ptrCliente->nombre);
	
	printf("Ingrese el numero de cliente\n");
	scanf("%d",&registroCliente.numeroCliente);
	printf("El apellido es : %d\n", ptrCliente->numeroCliente);
	
	printf("Ingrese el numero telefonico\n");
	scanf("%s",&registroCliente.persona1.numeroTelefonico);
	printf("El numero telefonico es : %s\n", ptrCliente->persona1.numeroTelefonico);
	
	printf("Ingrese la direccion\n");
	scanf("%s",&registroCliente.persona1.direccion);
	printf("El numero telefonico es : %s\n", ptrCliente->persona1.direccion);
	
	printf("Ingrese el ciudad\n");
	scanf("%s",&registroCliente.persona1.ciudad);
	printf("El numero telefonico es : %s\n", ptrCliente->persona1.ciudad);
	
	printf("Ingrese el estado\n");
	scanf("%s",&registroCliente.persona1.estado);
	printf("El numero telefonico es : %s\n", ptrCliente->persona1.estado);
	
	printf("Ingrese el codigo postal\n");
	scanf("%s",&registroCliente.persona1.codigopostal);
	printf("El numero telefonico es : %s\n", ptrCliente->persona1.codigopostal);
	
	system("pause");
	return 0;
}

