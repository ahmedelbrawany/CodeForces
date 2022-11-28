#include <iostream>
using namespace std;


bool isConditionTrue(int kilos){
    if(kilos == 2)
        return true;
    return kilos%2;

}

int main(){
    int watermelon_weight;
    cin>> watermelon_weight;
    if (!isConditionTrue(watermelon_weight)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
