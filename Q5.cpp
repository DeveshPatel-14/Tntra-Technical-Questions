#include<bits/stdc++.h>
using namespace std;

// Function with swapping logic
void swapNumber(int &n1,int &n2)
{
    // Swapping 2 numbers using XOR logical operator
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
}

int main()
{   
   int n1,n2;
   cout << "Enter number1: " << endl;
   cin >> n1;

   cout << "Enter number2: " << endl;
   cin >> n2;

   swapNumber(n1,n2); // Calling function

   cout << "New first number: " << n1 << endl;
   cout << "\n";
   cout << "New second number: " << n2 << endl;
    
    
    return 0;
}
