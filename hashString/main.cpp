//Sofía Sampogna A01721245 y David Hinojosa A01720601
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Recibe un string, y regresa el número que genera la función hash
long long hashFunc(string str) { 
    long long hash = 0; 
    int  p = 31;
    int m = 1e9 + 9;
    long long potencia = 1;
    for (int i = 0; i < str.length(); i++) {
        hash = (hash + (str[i] - 'a' + 1) * potencia) % m;
        potencia = (potencia * p) % m;
    }
    return hash;
}

int main()
{
    // Casos de prueba
    string str1="TEC Monterrey";
    cout<<"Caso 1"<<endl;
    cout<<hashFunc(str1)<<endl;

    string str2="Algoritmos Avanzados";
    cout<<"Caso 2"<<endl;
    cout<<hashFunc(str2)<<endl;

    string str3="Probando";
    cout<<"Caso 3"<<endl;
    cout<<hashFunc(str3)<<endl;

    string str4="Buenos Dias";
    cout<<"Caso 4"<<endl;
    cout<<hashFunc(str4)<<endl;

    //Input de texto para implementar función hash
    string str;
    cout<<"Texto a hashear: ";
    getline(cin, str);
    cout<<hashFunc(str)<<endl;

    system("pause");
    return 0;
}
