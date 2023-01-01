#include <iostream>

using namespace std;

int main()
{
    string players;
    cin>>players;

    int players_len = players.length();
    if(players_len>=7){
        int counter = 1;
        for(int i=0;i<players_len-1;i++){
            if(players[i]==players[i+1]){
                counter++;
                if(counter==7){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            else{
                counter=1;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
