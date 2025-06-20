#include<bits/stdc++.h>
using namespace std;

const int N=1e7+7;   // calculate upto 1e7
vector<int>primes;
int is_prime[N];
void sieve()
{
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i<N;i++)    is_prime[i]=1;
    for(int i=2;i*i<=N;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<N;j+=i) is_prime[j]=0;
        }
    }
    for(int i=0;i<N;i++)
        if(is_prime[i]) primes.push_back(i);
}

int main()
{

    sieve();

    for(int x:primes)   cout<<x<<" ";

    return 0;
}