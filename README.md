# Binary

How to convert decimal to binary?

int n;

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

