#include <iostream>

using namespace std;

int main()
{
    int op_num;
    int x = 0;

    cin>>op_num;
    string ops[op_num];

    for(int i =0;i<op_num;i++){
        cin>>ops[i];
        if(ops[i][0]=='+' || ops[i][2]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
