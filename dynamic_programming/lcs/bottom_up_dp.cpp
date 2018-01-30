#include <iostream>
#include <string.h>


using namespace std;

#define max(x, y) (x>y?x:y)

int lcs(const char* l1, const char* l2, int i, int j)
{
    int dp[i+1][j+1];
    for(int x = 0; x <= i; ++x)
        memset(dp[x], 0, sizeof(dp[x]));

    for(int m = 0; m <= i; ++m)
        for(int n = 0; n <= j; ++n)
        {
            if(m == 0 || n == 0)
                dp[m][n] = 0;
            else if(*(l1 + m -1) == *(l2 + n-1))
                dp[m][n] = 1 + dp[m-1][n-1];
            else 
                dp[m][n] = max(dp[m][n-1], dp[m-1][n]);
        }

    return dp[i][j];
}

int main()
{
    string l1 = "";
    string l2 = "";

    cout<<"Enter l1: "<<endl;
    cin>>l1;

    cout<<"Enter l2: "<<endl;
    cin>>l2;

    cout<<"l1: "<<l1<<endl;
    cout<<"l2: "<<l2<<endl;
    cout<<"Length of longest sub sequence: "<<lcs(l1.c_str(), l2.c_str(), l1.length(), l2.length())<<endl;

    return 0;
}
