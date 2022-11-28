#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    string words[n];
    for(int i = 0; i<n; i++){
        cin>>words[i];
    }
    int words_len;
    for(int i = 0; i<n; i++ ){
        words_len = words[i].length();
        if(words_len<= 10){
            cout<<words[i]<<endl;
        }
        else{
            cout<<words[i][0]<<words_len-2<<words[i][words_len-1]<<endl;
        }
    }
}
