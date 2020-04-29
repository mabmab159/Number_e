//cálculo del número e
#include <iostream>
using namespace std;
float numerador(int i){
	if (i==1){
		return 1;
	}else if (i == 2){
		return 2;
	}else{
		return numerador(i-1)+numerador(i-2);
	}
}
float denominador(int i){
	if (i==1){
		return 1;
	}else{
		return i*denominador(i-1);
	}
}
main(){
	int n;
	do{
		cout << "Ingrese la cantidad de datos: " << endl;
		cin >> n;
	}while(n<=0);
	float valor=0;
	for(int i=1; i<=n; i++){
		valor += numerador(i)/denominador(i);
	}
	cout << "La suma para los " << n << " primeros terminos es " << valor << endl;
	return 0;
}
