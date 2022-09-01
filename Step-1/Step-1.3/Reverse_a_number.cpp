// Question Link: https://takeuforward.org/c-programs/reverse-a-number-in-c/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
    int n, rev, digits;
    cin>>n;
    while(n != 0){
        digits = n%10;
        rev = rev * 10 + digits;
        n = n/10;
    }
    
    cout<<rev;
}
