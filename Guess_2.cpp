
#include <iostream>
using namespace std;
int main(){
    char ch='K';
    char answer = 'k';

    std::cout<<"Estoy pensando una letra entre la A y la Z"<<endl;
    std::cout<<"¿Puedes adivinarla?"<<endl;
    std::cin >> answer; //lee el char desde el teclado
    if(ch == answer)cout << "**Correcto **" << endl;
    else {
        if(ch < answer)cout<<"**Te qeudastes por debajo**"<<endl;
        else cout << "**Te has puesto por arriba**"<<endl;
        }
    return 0;
}
