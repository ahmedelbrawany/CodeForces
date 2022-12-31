#include <iostream>

using namespace std;

int main()
{
    int games_played;
    string winners;
    cin>>games_played>>winners;

    int anton_count=0;
    int danik_count=0;

    for(int i = 0; i<games_played; i++){
        if(winners[i]=='A')
            anton_count++;
        else
            danik_count++;
    }

    if(anton_count>danik_count)
        cout<<"Anton"<<endl;
    else if (danik_count>anton_count)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
