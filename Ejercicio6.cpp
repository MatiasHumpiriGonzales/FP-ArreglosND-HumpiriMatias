#include <iostream>
using namespace std;
int main(){
	int min, max;
	int matriz[6][6];
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
		}     
	}
	cout << "\nMatriz:\t\t\tMatriz reflejada horizontalmente: " << endl;
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			cout << matriz[i][j] << " ";
		}
	
		cout << "\t\t";
		for (int j = 5; j >= 0; j--){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
}
	return 0;
}
