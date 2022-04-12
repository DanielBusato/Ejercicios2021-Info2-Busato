//Ej2-InterésCompuesto
#include <stdio.h>
#include <math.h>


int main() {
	double monto,anios;
	double principal=1000.0;
	double tasa[]={0.05,0.06,0.08,0.09,0.1};
	int anio,cont;
	int c;
	
	for(cont=0;cont<5;cont++){
		anios=tasa[cont];
		
	printf("Tasa de interes de %.2f\n",tasa[cont]);
	printf("%4s %21s\n", "anio", "monto del deposito");
		
	for (anio=1;anio<=10;anio++){
		
		monto=principal*pow(1+anios,anio);
		printf("%4d %21.2f\n", anio, monto);
	}
	printf("\n\n");
	}
	
	scanf("%c",&c);
	return 0;
}

