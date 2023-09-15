#include<bits/stdc++.h>
using namespace std;

// Creation of class
class MyString {
    public:
    string s; //Declaration of member variables

    MyString() // Default Constructor
    {
        this->s = "";
    }

    MyString(string s) // Parameterise Constructor
    {
        this->s = s;
    }

    bool isPalindrome() // Calculation function logic
    {
        int n = (int)this->s.length();
        int start=0;
        int end = n-1;

        while(start < end)
        {
            if(s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }

        return true;

    }
};


int main()
{   
    // Dynamic Approach
    string s;
    cout << "please enter a string: \n";
    cin >> s;

   
    MyString s1(s);
    bool ans1 = s1.isPalindrome(); 
    cout << ans1 << endl;

    // static approach
    MyString s2("India");
    int ans = s2.isPalindrome();
    cout << ans << endl;
    
    return 0;
}
