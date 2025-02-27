#include <iostream>
using namespace std;
int main(){
    float ancho, largo;
    cout << "Escriba el largo del campo en pies: " << endl;
    cin >> largo;
    cout << "Escriba el ancho del campo en pies: " << endl;
    cin >> ancho;
    cout << "El area del campo es de: " << (largo*ancho)/43560 << " acres" << endl;
}
