// RNG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <cstdlib>
#define MAX_NUM 1000 // Define the maximum random number. Cannot be a decimal. To make a decimal, input two extra 00s and then after the execution divide by 100.

using namespace std;

void RNG()
{
    double random;
    double randomF;
    srand(time(NULL));

    for (int i = 0; i <= 10; i++)
    {
        random = rand() % MAX_NUM;
        cout << "First number: " << random << endl;
        randomF = random / 100;
        cout << "First random number in decimal: $" << randomF << endl;
        
       // cout << "i is: " << i << endl; --------------- Testing what value i was after increase.

    }
}

int main()
{
    cout << "The random numbers are: " << endl;
    RNG();
    return 0;
}

