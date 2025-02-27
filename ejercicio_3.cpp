#include <iostream>
#include <string>
using namespace std;
int main(){
    float ancho, largo;
    cout << "Ingrese el ancho de la habitacion en metros: " << endl;
    cin >> ancho;
    cout << "Ingrese el largo de la habitacion en metros; " << endl;
    cin >> largo;
    cout << "El area de la habitacion es de: " << largo * ancho << " metros cuadrados." << endl;
    return 0;
}
