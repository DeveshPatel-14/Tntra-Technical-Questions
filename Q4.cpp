#include<bits/stdc++.h>
using namespace std;

// Function to swap 2 strings
void swapStrings(string &s1,string &s2)
{
    for(int i=0;i<s1.length() && s2.length();i++) // swapping using XOR operation
    {
        s1[i] ^= s2[i];
        s2[i] ^= s1[i];
        s1[i] ^= s2[i];
    }
}

int main()
{   
    string s1,s2;
    cout << "Enter 2 strings: ";
    cin >> s1;
    cin >> s2;

    swapStrings(s1,s2); // Function Calling

    cout << "New string s1: " << s1;
    cout << "\n";
    cout << "New string s2: " << s2;
    
    
    return 0;
}
