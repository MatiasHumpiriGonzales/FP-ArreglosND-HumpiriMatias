#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int filas = 10;
    const int columnas = 10;
    int matriz[filas][columnas];
    int resultado[filas][columnas];
    srand(time(0));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 2;
        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int contador = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0) continue;
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni >= 0 && ni < filas && nj >= 0 && nj < columnas) {
                        if (matriz[ni][nj] == 1)
                            contador++;
                    }
                }
            }
            resultado[i][j] = contador;
        }
    }

    cout << "Simulador de buscaminas:\t\t\tResultado del buscaminas:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\t\t\t\t";
        for (int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

