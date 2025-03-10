#include<bits/stdc++.h>
using namespace std;
int add(int a)
{
    printf("%d\n",a);
    if(a==0)    return 0;
    return a+add(a-1)+add(a-1);
}
int main()
{
    printf("%d",add(2));
    return 0;
}