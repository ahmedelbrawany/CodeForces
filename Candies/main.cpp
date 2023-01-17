#include <iostream>

using namespace std;

int pow(int p){
    int res=2;
    for(;p>1;p--){
        res *=2;
    }
    return res;
}

int main()
{
    int cases;
    cin>>cases;
    int candies;
    int k;
    while(cases>0){
        k=2;
        cin>>candies;

        while(candies%(pow(k)-1)!=0){
            k++;
        }
        cout<<candies/((pow(k)-1))<<endl;
        cases--;
    }
    return 0;
}
