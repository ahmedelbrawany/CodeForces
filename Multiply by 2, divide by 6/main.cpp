#include<iostream>
#include <bits/stdc++.h>
using namespace std;


/*
idea: 
    equation: 
        1- (2^(x)*num)/(6^(y))=1 ----> what we need to get is x+y which is the number of 2s multiplied (x) and the number of 6s devided (y)
        2- (2^(x)*num)/(2^(y)*3^(y))=1
        3- (num)/(2^(y-x)*3^(y))=1 ----> from this we can conclude that the number of 2s devided must be less than or equal to the number of 3s devided

    so now what we need to do: 
        1- devide num by 2 until it can no loger be devided (meaning can't be devided without a remainder).
        2- devide the resulted num from step 1 by 3 until it can no longer be devided.
        3- the number of 2s devided is (y-x) and the number of 3s devided is y. (note eq.3) 
        4- to get x+y: 2*y - (y-x) = y+x where y is the number of 3s devided and (y-x) is the number of 2s devided
        


*/

int main(){
    int cases;
    cin>>cases;
    int num;
    int _2scount;
    int _3scount;
    while(cases--){
        _2scount=_3scount=0;
        cin>>num;
        while(num%2==0){
            _2scount++;
            num /=2;
        }
        while(num%3==0){
            _3scount++;
            num /=3;
        }
        if(_3scount>=_2scount&& num==1){
            cout<< 2 * _3scount - _2scount<<endl; 
        }else{
            cout<<-1<<endl;
        }
    }  
    return 0;
}