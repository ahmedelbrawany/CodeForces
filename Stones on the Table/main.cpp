#include <iostream>

using namespace std;

int main()
{
    int n;
    string stones;
    cin>>n>>stones;
    int rm_stones_num=0;
    for(int stone=0; stone<n;stone++){
        if(stones[stone]==stones[stone+1])
            rm_stones_num++;
    }
    cout<<rm_stones_num<<endl;

    return 0;
}
