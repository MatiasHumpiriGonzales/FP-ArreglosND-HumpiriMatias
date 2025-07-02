#include <iostream>
using namespace std;
int main(){
	int cambio1, cambio2, p;
	int matriz[4][4];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
		}
	}
		cout << "Ingrese las filas a intercambiar: ";
	cin >> cambio1 >> cambio2;
	if (cambio1 >= 4 or cambio2 >= 4){
		cout << "Fila(s) incorrecta(s): Debe ser del 0 al 3";
		return 0;
	}
	cout << " " << endl;
	
	cout << "Matriz:\t\t\tMatriz resultante: " << endl;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j];
			cout << " ";
		}
 		    cout << "\t\t";
			    for (int j = 0; j < 4; j++){
	  	          if (i == cambio1){
	  	          	cout << matriz[cambio2][j];
					} else if (i == cambio2){
						cout << matriz[cambio1][j];
					} else {
						cout << matriz[i][j];
					}
			        cout << " ";
			    }
			    cout << endl;
		    }
		    
	cout << "\nFilas a intercambiar: " << endl;
	cout << cambio1 << "\n" << cambio2;
	return 0;
}
