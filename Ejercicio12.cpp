#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int filas = 10;
    const int columnas = 10;
    int matriz[filas][columnas];
    int vida[filas][columnas];
    srand(time(0)); 
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 2; 
        }
    }
for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        int vecinosVivos = 0;
        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                if (dx == 0 && dy == 0) continue;
                int ni = i + dx;
                int nj = j + dy;
                if (ni >= 0 && ni < filas && nj >= 0 && nj < columnas) {
                    if (matriz[ni][nj] == 1)
                        vecinosVivos++;
                }
            }
        }
        if (matriz[i][j] == 1) {
            if (vecinosVivos == 2 || vecinosVivos == 3)
                vida[i][j] = 1; 
            else
                vida[i][j] = 0;
        } else {
            if (vecinosVivos == 3)
                vida[i][j] = 1;
            else
                vida[i][j] = 0; 
        }
    }
}

    cout << "\nJuego de la vida de Conway:\t\t\tResultado final:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\t\t\t\t";
        for (int j = 0; j < columnas; j++) {
            cout << vida[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

