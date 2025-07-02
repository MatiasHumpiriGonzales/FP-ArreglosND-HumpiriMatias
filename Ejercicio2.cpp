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
	cout << "Ingrese el numero deseado a buscar:\n ";
	cin >> buscador;

	cout << "Matriz:\t\t\tEl valor " << buscador << " se encuentra en\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matriz[i][j];
			cout << " ";
		
		}
		for (int j = 0; j <3; j++){
			if (matriz[i][j] == buscador){
				cout << "\t\t\tFila " << i << ", Columna " << j << endl;
			}
		}
	}
	cout << "Valor a buscar: " << buscador;
	

	return 0;
}
