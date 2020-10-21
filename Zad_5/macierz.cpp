#include <iostream>     
#include <iomanip> 

using namespace std;

int main () 
{
    float macierz1[2][3] = { {2, 4, 8.1},
                             {5.2, 6, 2}
                             };
    
    float macierz2[2][3] = { {5, 6, 9.2},
                             {3.4, 5, 7}
                             };

    float macierzAdd[2][3];

    cout<<"Macierz 1"<<"\t\t\t"<<"Macierz 2"<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<setw(5)<< macierz1[i][j];
        }
        cout<<"\t\t   ";
        for (int j = 0; j < 3; j++){
            cout<<setw(5)<< macierz2[i][j];
        }

        cout <<endl; 
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            macierzAdd[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }
    
    cout<<"Macierz po dodaniu"<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<setw(5)<<macierzAdd[i][j];
        }
        cout <<endl; 
    }

    return 0;
}