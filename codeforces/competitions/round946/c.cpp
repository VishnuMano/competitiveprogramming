#include <bits/stdc++.h>

using namespace std;

struct Triple
{
    int a;
    int b;
    int c;
    Triple(int a, int b, int c)
    {
        a = a;
        b = b;
        c = c;
    }
    void print()
    {
        cout << a << b << c;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int a[n];
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int counter = 0;
        vector<Triple> triples;
        for(int i = 0; i < n-2; i++)
        {
            triples.push_back(Triple(a[i], a[i+1], a[i+2]));
        }
        for(int i = 0; i < triples.size(); i++)
        {
            triples[i].print();
        }
        cout << counter << endl;
    }
}