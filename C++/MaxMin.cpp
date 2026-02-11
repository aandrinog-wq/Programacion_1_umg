
#include<iostream>
using namespace std;


int main() {
	int i;
	float max;
	float min;
	int n;
	float valor;
	cout << "Cuantos numeros desea ingresar: " << endl;
	cin >> n;
	i = 1;
	while (i<=n) {
		cout << "Ingrese un valor: " << endl;
		cin >> valor;
		if (i==1) {
			min = valor;
			max = valor;
		} else {
			if (valor<min) {
				min = valor;
			}
			if (valor>max) {
				max = valor;
			}
		}
		i = i+1;
	}
	cout << "El valor maximo es: " << max << endl;
	cout << "El valor minimo es: " << min << endl;
	return 0;
}

