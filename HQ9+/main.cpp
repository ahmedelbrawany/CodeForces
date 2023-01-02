#include <iostream>

using namespace std;

bool isCharInString(string str, char c){
    for(int i =0; i<str.length(); i++){
        if(str[i]== c)
            return true;
    }
    return false;
}

int main()
{
    string command;
    cin>>command;
    char keyWords[4] = {'H','Q','9'};
    for(int i=0;i<4;i++){
        if(isCharInString(command, keyWords[i])){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
