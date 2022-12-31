#include <iostream>

using namespace std;

int main()
{
    int childern_num;
    int seconds_countdown;
    string boys_girls;
    cin>>childern_num>>seconds_countdown>>boys_girls;

    childern_num--;
    for(;seconds_countdown!=0; seconds_countdown--){
        for(int i=0; i<childern_num;i++){
            if(boys_girls[i]=='B'&& boys_girls[i+1]=='G'){
                boys_girls[i]='G';
                boys_girls[i+1]='B';
                i++;
            }
        }
    }
    cout<<boys_girls<<endl;

    return 0;
}
