#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Indique el tamaño de la matriz cuadrada: ";
	cin >> n;
	int matriz[n][n];
		for (int j = 0; j < n; j++){
			matriz[0][j] = j + 1;
        }
    for (int i = 1; i < n; i++ ){
    	for (int j = 0; j < n; j++){
    		matriz[i][j] = matriz[i - 1][(j-1+n)%n];
		}
	}
	cout << "\nCuadrado latino de orden " << n << ": " << endl;
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << matriz[i][j] << " ";
	}
	cout << endl;
}

    return 0;
}
