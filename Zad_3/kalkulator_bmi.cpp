#include <iostream>
#include <math.h>
#include <stdexcept>

using namespace std;

int main(){
    float masa_ciala = 0;
    float wzrost = 0;
    float bmi = 0;

    cout<<"Wprowadz swoja wage w kg: "<<endl;
    cin>>masa_ciala;
    cout<<"Wprowadz swoj wzrost w cm: "<<endl;
    cin>>wzrost;

    wzrost = wzrost/100;

    try{
        if(wzrost == 0) throw runtime_error("Division by 0\n");     

    }
    catch(runtime_error& e)
    {
        cout<<"Exception caught. Try again"<<endl<<e.what();
        return 0;
    }

    bmi = (masa_ciala)/(wzrost * wzrost);
    bmi = round(bmi*100)/100;

    cout<<"Twoje BMI wynosi: "<<bmi<<endl;
    if(bmi < 16){
        cout<<"mniej niz 16 - wyglodzenie"<<endl;
    }
    else if(bmi > 16 && bmi < 16.99){
        cout<<"16 - 16.99 - wychudzenie"<<endl;
    }
    else if(bmi > 17 && bmi < 18.49){
        cout<<"17 - 18.49 - niedowaga"<<endl;
    }
    else if(bmi > 18.5 && bmi < 24.99){
        cout<<"18.5 - 24.99 - wartoscc prawidłowa"<<endl;
    }
    else if(bmi > 25 && bmi < 29.99){
        cout<<"25 - 29.99 - nadwaga"<<endl;
    }
    else if(bmi > 30 && bmi < 34.99){
        cout<<"30 - 34.99 - I stopien otylosci"<<endl;
    }
    else if(bmi > 35 && bmi < 39.99){
        cout<<"35 - 39.99 - II stopień otyłości"<<endl;
    }
    else {
        cout<<"powyżej 40 - otylosc skrajna"<<endl;
    }
    return 0;
}