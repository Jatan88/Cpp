// Question Link: https://takeuforward.org/data-structure/count-digits-in-a-number/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
    int n, cnt=0;
    cin>>n;
    while(n != 0){
        n = n/10;
        cnt++;
    }
    
    cout<<cnt;
}
