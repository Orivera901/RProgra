
#include <iostream>
using namespace std;
int main(){
    int x;
    for(x=0;x<6;x++){
        std::cout<< x << endl;
        if(x==1)
            std::cout << "x es uno" << endl;
        else if(x==2)
            std::cout << "x es dos" << endl;
        else if(x==3)
            std::cout<< "x es tres" << endl;
        else if(x==4)
            std::cout<< "x es cuatro" << endl;
        else{
            std::cout<< "x is not between 1 and 4 " << endl;
        }
    }
    return 0;
}
