#include <iostream>

using namespace std;

int main()
{
    string username;
    cin>>username;
    char distinct_chars[username.length()];

    distinct_chars[0] = username[0];
    int distinct_chars_len = 1;

    bool flag = false;
    for(int letter=0;letter<username.length(); letter++){
        flag = false;
        for(int distinctLetter =0;distinctLetter<distinct_chars_len; distinctLetter++){
            if(username[letter]==distinct_chars[distinctLetter]){
                flag=true;
                break;
            }

        }
        if(flag)
            continue;
        distinct_chars[distinct_chars_len++] = username[letter];
    }
    if(distinct_chars_len%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
