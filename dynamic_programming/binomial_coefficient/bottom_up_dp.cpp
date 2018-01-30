#include <iostream>

using namespace std;


#define min(a,b) (a<b?a:b)

long binomial_coefficient(int n, int k)
{
    long c[n+1][k+1];
    int i, j;
    for(int x = 0; x <= n; ++x)
        for(int y = 0; y<=k; ++y)
        {
            c[x][y] = 0;
        }
    for(i = 0; i<=n; ++i)
    {
        for(j = 0; j <=min(i, k); ++j)
        {
            if(j == 0 || (i == j)){
                c[i][j] = 1;
            }
            else {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
            }
        }
    }

    return c[n][k];
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
