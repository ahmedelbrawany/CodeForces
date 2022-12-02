#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int total_purchase=0;
    int money_to_borrow;
    for(int i=1;i<=w;i++){
        total_purchase += i*k;
    }
    money_to_borrow = total_purchase - n;
    if(money_to_borrow<=0)
        cout<<0<<endl;
    else
        cout<<money_to_borrow<<endl;
    return 0;
}
