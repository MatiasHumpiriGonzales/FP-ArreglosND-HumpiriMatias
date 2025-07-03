#include <iostream>
using namespace std;
int main(){
	int matriz[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 5; i++){
    	for (int j = 0; j < 5; j++){
    		cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
    cout << "\nEjemplo de salida:\nRecorrido en espiral:\n";
    for (int i = 0; i < 5; i++){
    	cout << matriz[0][i] << " ";
	}
	for (int i = 1; i < 5; i++){
		cout << matriz[i][4] << " ";
	}
	for (int i = 3; i >= 0; i--){
		cout << matriz[4][i] << " ";
	}
	for (int i = 3; i >= 1; i--){
		cout << matriz[i][0] << " ";
	}
	for (int i = 1; i < 4; i++){
		cout << matriz[1][i] << " ";
	}
	for (int i = 2; i < 4; i++){
		cout << matriz[i][3] << " ";
	}
	for (int i = 2; i >= 1; i--){
		cout << matriz[3][i] << " ";
	}
	for (int i = 1; i <= 2; i++){
		cout << matriz[2][i] << " ";
	}

	return 0;
}
