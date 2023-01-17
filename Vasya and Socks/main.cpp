#include <iostream>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int total = n;
    while(n>0&&n>=m){
            n-=m;
            total++;
            n++;
    }
    cout<<total<<endl;
    return 0;
}