#include <iostream>
using namespace std;
int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor para la matriz N_1:  [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    int matriz2[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor para la matriz N_2:  [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }
    int multiplicacion[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            multiplicacion[i][j] = 0;  
            for (int k = 0; k < 3; k++) {
                multiplicacion[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
    cout << "Matriz resultante de la multiplicacion: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << multiplicacion[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

