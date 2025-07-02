#include <iostream>
using namespace std;
int main(){
	int diagonal1, diagonal2, suma;
	diagonal1 = 0;
	diagonal2 = 0;
	int matriz[4][4];
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor para la matriz [" << i << "][" << j << "]:  ";
            cin >> matriz[i][j];
    }
 }
 diagonal1 = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3];
 diagonal2 = matriz[0][3] + matriz[1][2] + matriz[2][1] + matriz[3][0];
 suma = diagonal1 + diagonal2;
 cout << "Matriz: " << endl;
 for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
}
cout << "La suma de las diagonales es: " << endl;
cout << "" << matriz[0][0] << "                 " << matriz[0][3] << endl;
cout << "  " << matriz[1][1] << "             " << matriz[1][2] << endl;
cout << "    " << matriz[2][2] << "         " << matriz[2][1] << endl;
cout << "      " << matriz[3][3] << "     " << matriz[3][0] << endl;
cout << diagonal1 << " + " << diagonal2 << " = " << suma;
return 0;
}
