#include <bits/stdc++.h>

using namespace std;

vector <int> dec_to_bin(int n)
{
    int i=0;
    vector <int> digits;

    while(n)
    {
        digits.push_back(n%2);
        n/=2;
    }
return digits;
}



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector <int> digits;
    digits = dec_to_bin(n);
    int number=0;
    vector <int> result;
    for(int j=digits.size()-1;j>=0;j--)
    {
        int m = digits[j];
        if (digits[j]==1) {number++;}
        if (digits[j]==0) {result.push_back(number);number=0;}
    }
    result.push_back(number);
    sort(result.begin(),result.end());
        cout<<result[result.size()-1]<<endl;

    return 0;
}
