#include <iostream>
#include <string.h>


using namespace std;

#define max(x, y) (x>y?x:y)

int lcs(const char* l1, const char* l2, int i, int j)
{
    if(i == 0 || j == 0)
        return 0;
    if(*(l1 + i) == *(l2 + j))
        return 1 + lcs(l1, l2, i - 1, j - 1);
    else 
        return max(lcs(l1, l2, i, j-1), lcs(l1, l2, i-1, j));
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
