#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    s: "hello"
    r: "ehlo"
    coded: "lohhe"

    s: fft
    r: ft
    coded: ttf
    */
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string b;
        cin >> n;
        cin >> b;
        string original = b;
        string s = "";

        // Convert b -> r
        sort(b.begin(), b.end());
        auto last = unique(b.begin(), b.end());
        b.erase(last, b.end());

        // Create Map That Represents Code
        unordered_map<char, char> code;
        for(int i = 0; i < b.length(); i++)
        {
            auto key = b[i];
            code[key] = b[b.length()-1-i];
        }
    
        // Convert original -> coded
        for(int i = 0; i < n; i++)
        {
            auto key = original[i];
            s += code[key];
        }
        cout << s << endl;
    }
}