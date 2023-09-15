#include<bits/stdc++.h>
using namespace std;

// Calculation logic funciton
void getMinMax(int arr[],int n)
{
    int mi = INT_MAX; // Initialization of the minimum value variable with a very large maximum value
    int mx = INT_MIN; // Initialization of the maximum value variable with a very small minimum value

    for(int i=0;i<n;i++) // Comparing every number in the array
    {
        mi = min(mi,arr[i]);
        mx = max(mx,arr[i]);
    }

    cout << "Maximum Number: " << mx; // Max Number
    cout << "\n";
    cout << "Minimum Number: " << mi; // Min Number
    cout << "\n";
}


int main()
{   
    int n;
    cout << "Enter number of elements for the array: \n";
    cin >> n;
    int arr[n];

    cout << "Enter all the elements in the arrary: \n";

    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }


    getMinMax(arr,n); // Funtion called
    
    // Additionally if we want the output from the function to be returned we can use a vector like
    // vector<int> number(2,0); and then number[0] would contain the max number and number[1] would 
    // contain the min number
    // Or we can also use pair<int,int> return type and retrieve numbers like number.first and number.second


    
    
    return 0;
}
