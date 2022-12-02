#include <iostream>

using namespace std;

int main()
{
    int friend_cor;
    cin>>friend_cor;

    int steps_num=0;
    int moves[5] = {5,4,3,2,1};
    for(int i=0;friend_cor!=0&&i<5;i++){
        if(friend_cor%moves[i]==0){
            steps_num += friend_cor/moves[i];
            break;
        }
        else if((int)(friend_cor/moves[i])>0){
            int temp = friend_cor/moves[i];
            steps_num += temp;
            friend_cor -= moves[i]*temp;
        }

    }
    cout<<steps_num<<endl;
    return 0;
}
