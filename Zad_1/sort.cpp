#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc == 1) { // checking if there are any arguments
        cout<<"No arguments!"<<endl;
        return 0;
    }

    vector<int>numbers;

    for(int i = 1; i < argc; i++ ) { 
        int num = atoi(argv[i]); // string to int conversion
        numbers.push_back(num); // adding numbers to vector
    } 

	sort(numbers.begin(), numbers.end());

     for(int i = 0; i < numbers.size(); i++) {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;

    numbers.clear();

    return 0;  


}