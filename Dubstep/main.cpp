#include <iostream>
#include <string.h>
using namespace std;

string WUB_remover(string str, int start_index){
    int str_len = str.length();
    string wub_removed;

    if(start_index!=0 && start_index+3 !=str_len && str[start_index+3]!=' ' && str[start_index-1]!=' ' ){

         wub_removed = str.substr(0, start_index)+(string)" "+ str.substr(start_index+3, str_len) ;

    }
    else{
        wub_removed = str.substr(0, start_index)+ str.substr(start_index+3, str_len);
    }

    return wub_removed;
}

int main()
{
    string remix;
    cin>>remix;
    for(int i=0;i<remix.length();i++){
        if(remix.substr(i,3)=="WUB"){
            remix = WUB_remover(remix, i);
            i=-1;
        }
    }
    cout<<remix<<endl;


    return 0;
}
