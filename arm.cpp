/*
Description
Problem Statement
A number is called an Armstrong number if the sum of the cube of its digits is equal to the number itself. An example would be 153 because 13 + 53 + 33 = 153.

Write a code which implements the given logic and checks whether the number is an Armstrong number or not. If yes, print "It is an ARMSTRONG number", else print "It is NOT an ARMSTRONG number".

Input Format
The first line is an integer which denotes the number of Test cases T.
The next T lines take an integer as input to check whether it is an Armstrong number.
Output
If the number taken as input is an Armstrong number, print "It is an ARMSTRONG number", else print "It is NOT an ARMSTRONG number".
Evaluation Parameters
Sample Input
3
153
123
367
Sample Output
It is an ARMSTRONG number
It is NOT an ARMSTRONG number
It is NOT an ARMSTRONG number


Execution time limit
10 seconds
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{153, 123, 367};

    for (int i = 0; i < arr.size(); i++)
    {
        int temp = arr[i];
        int n = arr[i];
        int sum = 0;
        int rem;

        while (n > 0)
        {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }

        if (temp == sum)
        {
            cout << "It is an ARMSTRONG number\n";
        }
        else
        {
            cout << "It is NOT an ARMSTRONG number\n";
        }
    }

    return 0;
}