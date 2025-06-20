#include<bits/stdc++.h>
using namespace std;

const int N=1e7+7;  //ideally can calculate upto 1e8
bitset<N>is_prime;
vector<int>primes;
void sieve()
{
    is_prime.set(); //set all bits to 1
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<N;j+=i)  is_prime[j]=0;
        }          
    }
    for(int i=2;i<N;i++)
        if(is_prime[i]) primes.push_back(i);
}
int main()
{
    sieve();
    for(int x:primes)    cout<<x<<" ";
    return 0;
}