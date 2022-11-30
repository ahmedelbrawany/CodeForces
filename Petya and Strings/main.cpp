#include <iostream>

using namespace std;

int main()
{
    string one;
    string two;
    cin>>one;
    cin>>two;
    for(int letter=0;letter<one.length();letter++){
        //converting chars into lowercase
        if(one[letter]<=90)
            one[letter] += 32;
        if(two[letter]<=90)
            two[letter] +=32;
    }
    if(one>two)
        cout<<1<<endl;
    else if(two>one)
        cout<<-1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
