#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int num;
    cin>>n;
    while(n>0){
        cin>>num;
        if(num%2==0){
            while(num%2==0){
                num /=2;
            }
            if(num==1){
                cout<<"NO"<<endl;
                n--;
                continue;
            }
        }
        cout<<"YES"<<endl;
        n--;
    }
    return 0;
}
