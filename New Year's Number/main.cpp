#include<iostream>
using namespace std;

bool search(int num){
    int y = 1;
    int x=(num-y*2021)/2020;
    
    while(x>0&&num >= x*2020+y*2021){
        if(x*2020+y*2021==num){
            return true;
        }
        y++;
        x= (num-y*2021)/2020;
    }
    x=1;
    y=(num-x*2020)/2021;
    while(y>0&&num >= x*2020+y*2021){
        if(x*2020+y*2021==num){
            return true;
        }
        x++;
        y= (num-x*2020)/2021;

    }
    return false;
}

int main(){
    int cases;
    cin>>cases;
    int num;
    
    while(cases>0){
        cin>>num;
        if(num<2020){
            cout<<"NO"<<endl;
        }
        else if(num%2020==0 || num%2021==0){
            cout<<"YES"<<endl;
        }
        else{
            if(search(num)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        cases--;
    }
    return 0;
}