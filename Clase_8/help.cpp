
#include <iostream>
using namespace std;

int main(){
    char choice;
    cout<<"Help on:"<<endl;
    cout<<"1. if"<<endl;
    cout<<"2. switch"<<endl;
    cout<<"Choose one: "<< endl;
    cin>>choice;
    switch(choice){
        case '1':
            cout<<"The if:\n"<<endl;
            cout<<"if(condition) statement;"<<endl;
            cout<<"else statement;"<<endl;
            break;
        case '2':
            cout<<"The switch:\n"<<endl;
            cout<<"switch(expression) {"<<endl;
            cout<<"case constant:"<<endl;
            cout<<"statement sequence"<<endl;
            cout<<"break;"<<endl;
            cout<<"/"<<"/ ..."<< endl;
            break;
        default:
            cout<<"Selection not found"<<endl;
    }
    return 0;
}
