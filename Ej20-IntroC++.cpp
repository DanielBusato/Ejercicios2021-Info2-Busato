#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char nombre[10], domicilio[20], ciudad[20], estado[20];
	int cp;

	std::cout<<"ingrese nombre\n";
	std::cin>>nombre;
	std::cout<<"ingrese domicilio\n";
	std::cin>>domicilio;
	std::cout<<"ingrese ciudad\n";
	std::cin>>ciudad;
	std::cout<<"ingrese estado civil\n";
	std::cin>>estado;
	std::cout<<"ingrese codigo postal\n";
	std::cin>>cp;
	
	std::cout<<nombre<<"\n";
	std::cout<<domicilio<<"\n";
	std::cout<<ciudad<<" "<<estado<<" "<<cp<<std::endl;

	system("pause");
	return 0;
}

