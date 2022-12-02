#include <iostream>

using namespace std;

string toupperCase(string w){
    int w_len = w.length();
    for(int i=0;i<w_len;i++){
        if(w[i]>90)
            w[i] -= 32;
    }
    return w;
}

string tolowerCase(string w){
    int w_len = w.length();
    for(int i=0;i<w_len;i++){
        if(w[i]<=90)
            w[i] += 32;
    }
    return w;
}

int main()
{
    string word;
    cin>>word;
    int lowercase_count = 0;
    int uppercase_count = 0;
    int word_len = word.length();
    for(int i=0;i<word_len; i++){
        if(word[i]<=90)
            uppercase_count++;
        else
            lowercase_count++;
    }
    if(uppercase_count>lowercase_count)
        cout<<toupperCase(word)<<endl;
    else
        cout<<tolowerCase(word)<<endl;
    return 0;
}
