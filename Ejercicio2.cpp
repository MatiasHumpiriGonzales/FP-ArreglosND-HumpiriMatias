#include <iostream>
using namespace std;
int main(){
int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
		}
	}
	int buscador;
	cout << "Ingrese el numero deseado a buscar: ";
	cin >> buscador;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j <3; j++){
			if (matriz[i][j] == buscador){
				cout << "El numero " << buscador << " se encuentra en: " << endl << "Fila " << i << ", Columna " << j << endl;
			}
		}
	}
	return 0;
}
