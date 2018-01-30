#include <iostream>

using namespace std;


#define min(a,b) (a<b?a:b)

void pascal_triangle(int n, int k)
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
                cout<<c[i][j]<<" ";
            }
            else {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
                cout<<c[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n, k;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<"Pascal Triangle of ("<<n<<") is as follows : "<<endl;
    pascal_triangle(n,n);

    return 0;
}
