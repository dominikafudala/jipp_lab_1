#include <iostream>
#include <cmath>

using namespace std;

int wyliczSume(int liczba){
    int suma = 0;
    for(int i = 1; i <=liczba/2; i++)
    {
        if (liczba % i == 0){
            suma += i;
        }
    }

    return suma;

}

int main(){
    int liczba1 = 0, liczba2 = 0;
    int suma1 = 0, suma2 = 0;
    cout<<"Wprowadz dwie liczby calkowite"<<endl;
    cin >> liczba1 >>liczba2;

    suma1 = wyliczSume(liczba1);
    suma2 = wyliczSume(liczba2);

    if(suma1 == liczba2 + 1 && suma2 == liczba1 + 1){
        cout<<"Liczby sa skojarzone";
    }
    else {
        cout<<"Liczby nie sa skojarzone :(";
    }
    cout <<endl;

    return 0;
}