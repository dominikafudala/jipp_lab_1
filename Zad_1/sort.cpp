#include <iostream>
#include <vector>

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

	for (int i = 1; i < numbers.size(); i++) // loop for sorting
	{
        int count = 0;
		int x = numbers[i];
		int j = i - 1;
		while (j >= 0 && numbers[j] > x)
		{
			numbers[j + 1] = numbers[j];
			j--;
			count++;
		}
		numbers[j + 1] = x;
	}

     for(int i = 0; i < numbers.size(); i++) {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;

    numbers.clear();

    return 0;  


}