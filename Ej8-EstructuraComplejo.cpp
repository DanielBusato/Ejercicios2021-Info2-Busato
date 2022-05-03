#include <iostream>
using namespace std;
struct complejo{
	float real;
	float imaginario;
};

int main(int argc, char *argv[]) {
	struct complejo x, *px, cx[100];
	
	x.real=1.3;
	x.imaginario=-2.2;
	
	px=&x;
	
	cx[17].real=9.9;
	cx[17].imaginario=8.8;
	
	printf("El miembro real de la variable x es: %.2f\n",x.real);
	printf("El miembro imaginario de la variable x es: %.2f\n",x.imaginario);
	
	printf("El elemento n18 del arreglo cx, miembro real  es: %.2f\n",cx[17].real);
	printf("El elemento n18 del arreglo cx, miembro imaginario es: %.2f\n",cx[17].imaginario);
	
	
	
	

	
	
	system("pause");
	return 0;
}

