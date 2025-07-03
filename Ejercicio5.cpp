#include <iostream>
using namespace std;
int main(){
	int min, max;
	int matriz[4][4];
	min = matriz[1][1];
	max = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
		}     
	}
	cout << "\nMatriz: " << endl;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i<4; i++){
		for (int j = 0; j < 4;j++){
			if(matriz[i][j] > max){
				max = matriz[i][j];
			} else {
				max = max;
			}
		}
	}
	for (int i = 0; i<4; i++){
		for (int j = 0; j < 4;j++){
			if(min < matriz[i][j]){
				min = min;
			} else  {
					min = matriz[i][j];
				}
				
			}
		}
	cout << endl;
	cout << "Minimo: " << min << endl;
	cout << "Maximo: " << max << endl;
	return 0;
}
