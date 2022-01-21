// Binary Gap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// you can use includes, for example:
// #include <algorithm>
#include <sstream>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    cin >> N;
    string s;
    stringstream ss;
    ss << N;
    ss >> s;
    int remainder;
    int stringlength = s.length();
    int arr[s.length()];
    int output[s.length()];

    for (int j = 0; j <= stringlength; j++) {
        arr[j] = j;
    }

    for (int i = 0; i <= stringlength; i++) {
        if (i % 2 == 0) {
            remainder = arr[i] % 2;
            if (remainder >= 1) {
                output[i] = '1';
            }
            else {
                output[i] = '0';
            }
        }
    }
    int zerocount = 0;

    for (int w = 0; w <= stringlength; w++) {
        if (output[w] == 0 && output[w + 1] == 0) {
            zerocount += 2;
        }
        else if (output[w] == 0 && output[w + 1] != 0) {
            zerocount += 1;
        }
    }
    return zerocount;
}
int main()
{
    solution();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
