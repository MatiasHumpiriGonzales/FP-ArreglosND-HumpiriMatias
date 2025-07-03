#include <iostream>
using namespace std;
int main(){
	int matriz[4][4];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nMatriz:\t\t\tMatriz rotada 90 grados en sentido horario: " << endl;
    for (int i = 0; i < 4; i++){
    	for (int j = 0; j < 4; j++){
    		cout << matriz[i][j] << " ";
		}
	cout << "\t\t";
	for (int j = 3; j >= 0; j--){
		cout << matriz[j][i] << " ";
	}
	cout << endl;
}
	return 0;
}
    
