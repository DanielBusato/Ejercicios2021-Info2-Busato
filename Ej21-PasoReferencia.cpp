#include <iostream>
using namespace std;

int tripleLlamadaPorValor(int a){
	a=a*3;
	std::cout<<"Valor triplicado por valor: "<<a<<std::endl;
	return a;
}
void triplePorReferencia(int &a){
	a=a*3;
	std::cout<<"Valor triplicado por referencia: "<<a<<std::endl;
}

int main(int argc, char *argv[]) {
	int num=2;
	
	int nuevovalor=tripleLlamadaPorValor(num);
	triplePorReferencia(num);
	
	system("pause");
	return 0;
}

