#include <iostream>
#include <string>

using namespace std;

int main()
{
    string bank_account_state;
    cin>>bank_account_state;
    if(stoi(bank_account_state)<0){
        int BAS = -stoi(bank_account_state);
        int last_digit = (BAS)%10;
        int before_last_digit = ((int)(BAS/10))%10;
        if(last_digit>before_last_digit){
            bank_account_state[bank_account_state.length()-1]= 0;
        }else{
            bank_account_state[bank_account_state.length()-2]= bank_account_state[bank_account_state.length()-1];
            bank_account_state[bank_account_state.length()-1]= 0;
        }
    }
    cout<<stoi(bank_account_state)<<endl;
    return 0;
}
