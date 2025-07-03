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
            matriz[i][j] = rand() % 3;
        }
    }
        for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int indicio = 0;
            int fuego = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0) continue;
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni >= 0 && ni < filas && nj >= 0 && nj < columnas) {
                        if (matriz[ni][nj] == 1)
                            indicio++;
                            else if (matriz[ni][nj] ==2)
                            fuego++;
							
                    }
                }
            }
            resultado[i][j] = indicio;
        }
    }
    
    cout << "\nSimulador de incendios:\t\t\tResultado del incendio:" << endl;
    for (int i = 0; i < filas; i++){
    	for (int j = 0; j < columnas; j++){
    		cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}
