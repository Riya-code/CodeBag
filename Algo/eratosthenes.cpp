#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

void sieve(int n)
{
    bool prime[n+1];

    for (int p=2; p*p<=n; p++)// for n=2;n*n<=p;n++
    {
        if (prime[p]==true)
        {
            for (int i=p*p;i<=n;i+=p)
            prime[i]=false;
        }
    }

    for (int p=2;p<=n; p++)
    if (prime[p])
    cout<<p<<" ";
}

int main(){
    int n;
    cout<<"enter"<<"\n";
    cin>>n;
    sieve(n);
    return 0;

}

