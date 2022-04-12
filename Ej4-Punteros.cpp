//Ej4-Punteros
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	long integer, valor1=200000, valor2;
	long *ptrL;
	
	ptrL=&valor1;
	
	printf("%i\n",*ptrL);
	
	valor2=*ptrL;
	
	printf("%i\n",valor2);
	
	printf("%i\n",&valor1);
	
	printf("%i\n",&ptrL);
	
	
	system("pause");
	return 0;
}

