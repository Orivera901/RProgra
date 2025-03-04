#include <iostream>
#include <iomanip> //Libreria para redondear punto flotante
using namespace std;
int main(){
    /* */
    int ContP, ContG;
    cout<<"Coloque la cantidad de contenedores de menos o igual a un litro: "<<endl;
    cin>>ContP;
    cout<<"Coloque la cantidad de contenedores de mas de un litro: "<<endl;
    cin>>ContG;
    float Reembolso = (ContP * 0.1) + (ContG * 0.25);
    cout<<"El reembolso es de: " << char(36) << fixed << setprecision(2) << Reembolso << endl; //char(36) es para insertar el signo de dolar con ASCII
    return 0;
}
