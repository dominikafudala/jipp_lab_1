#include <iostream>
#include <string>

using namespace std;

bool sprawdzPalindrom(string str){
    int dlugosc = str.size();

    for(int i = 0; i < dlugosc/2; i++)
        if(str[i] != str[dlugosc - i - 1]) return false;

    return true;
}

int main(int argc, char *argv[]){
    string slowo(argv[1]);
    bool jestPalindromem = sprawdzPalindrom(slowo);

    if(jestPalindromem){
        cout<<"Wyraz jest palindromem"<<endl;
    }
    else cout<<"Wyraz nie jest palindromem"<<endl;

    return 0;
}