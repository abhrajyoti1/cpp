#include <iostream>

using namespace std;

long dp[1024] = {0};

long binomial_coefficient(int n, int k)
{
    if(n == 0)
        return 0;
    if(n == k)
        return 1;
    if(k == 0)
        return 1;
    if(dp[n] != 0)
        return dp[n];
    else
        return dp[n] = binomial_coefficient(n-1, k-1) + binomial_coefficient(n-1, k);
}

int main()
{
    int n, k;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<"Enter value of k: "<<endl;
    cin>>k;

    cout<<"Binomial coefficient of ("<<n<<","<<k<<"): "<<binomial_coefficient(n,k)<<endl;

    return 0;
}
