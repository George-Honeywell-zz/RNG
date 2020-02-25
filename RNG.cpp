// RNG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>
#include <random>
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
        randomF = random / 100; // Divides random number to get two decimal places.
        cout << "First random number in decimal: " << fixed << setprecision(2) << randomF << endl; //This line includes the 'fixed...setprecision' line. This forces it to use 2 decimal places.
       
    }
}

int func(int a, int b)
{
    return a * b / 10;
}

int main()
{
    cout << "The random numbers are: " << endl;
    //RNG();
    cout << "That's it for the RNG, see you next time." << endl;

    //
    //random_device rnd;
    //cout << rnd.entropy() << endl;
    //cout << rnd.min() << endl;
    //cout << rnd.max() << endl;

    
    cout << func(98, 24);




}

