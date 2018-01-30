#include <iostream>
#include <string.h>

using namespace std;


#define min(a,b) (a<b?a:b)

long binomial_coefficient(int n, int k)
{
    long c[k+1];
    int i, j;

    for(int p = 0; p <= k; ++p)
        c[p] = 0;

    c[0] = 1;

    for(i = 1; i<=n; ++i)
    {
        for(j =min(i, k); j > 0; j--)
        {
            c[j] = c[j] + c[j-1];
        }
    }

    return c[k];
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
