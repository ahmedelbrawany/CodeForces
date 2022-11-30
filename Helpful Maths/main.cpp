#include <iostream>

using namespace std;


int main()
{
    string sum_op;
    cin>>sum_op;
    for(int i =0;i<sum_op.length();i++){
        for(int j=i+1;j<sum_op.length();j++){
            if(sum_op[j]==43)
                continue;
            if(sum_op[i]>sum_op[j]){
                sum_op[i] += sum_op[j];
                sum_op[j] = sum_op[i] - sum_op[j];
                sum_op[i] -= sum_op[j];
            }
        }
    }
    cout<<sum_op<<endl;

    return 0;
}
