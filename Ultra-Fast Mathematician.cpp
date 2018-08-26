#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,b;
    cin >> s >> b;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != b[i])
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}
