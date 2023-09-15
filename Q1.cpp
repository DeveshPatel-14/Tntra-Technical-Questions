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

    int calculateOccurrence(char ch) // Calculation function logic
    {
        int count=0;
        int n = (int)this->s.length();

        for(int i=0;i<n;i++)
        {
            if(s[i] == ch)
            {
                count++;
            }
        }

        return count;

    }
};


int main()
{   
    // Dynamic Approach
    string s;
    cout << "please enter a string: \n";
    cin >> s;

    cout << endl;

    char ch;
    cout << "please enter a character whose occurrences you want to find: \n";
    cin >> ch;

    MyString s1(s);
    int ans1 = s1.calculateOccurrence(ch); 
    cout << "Occurences of the character " << ch << "are: " << ans1 << endl;

    // static approach
    MyString s2("geeksforgeeks");
    int ans = s2.calculateOccurrence('e');
    cout << ans << endl;
    
    return 0;
}
