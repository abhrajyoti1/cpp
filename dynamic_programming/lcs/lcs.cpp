#include <iostream>
#include <string.h>


using namespace std;

void lcs(const char* l1, const char* l2)
{

    for(int i = 0; i <= strlen(l1); ++i)
    {
        for(int j = 0; j <= strlen(l2); ++j)
        {
            if(l1[i] == l2[j])
                cout<<l1[i];
        }
    }
}

int main()
{
    const char* l1 = "abcdgh";
    const char* l2 = "aedfhr";

    cout<<"l1: "<<l1<<endl;
    cout<<"l2: "<<l2<<endl;
    lcs(l1, l2);
    cout<<endl;

    return 0;
}
