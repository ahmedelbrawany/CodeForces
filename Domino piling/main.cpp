#include <iostream>

using namespace std;

int main()
{
    int m, n ;
    int max_domino_num = 0;
    cin>>m;
    cin>>n;
    max_domino_num = m/2;
    max_domino_num *= n;
    max_domino_num += ((m*n) - max_domino_num*2)/2;
    cout<<max_domino_num<<endl;

    return 0;
}
