#include <iostream>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;

    int start;
    long long int result;
    if(n%2==0&&k>n/2){
    // the result is an even number
        start = 2;
        //decrease k by the number of odd positions(since the sequence starts with the odd numbers)
        // then decrease one from k since the start variable starts with the first even position (start = 2)
        k -=n/2+1;
        //now k is the number of positions we need to move from the start
        result= start+k*2;


    }
    else if(k>n/2+1&&n%2!=0){
        start=2;
    // the result is an even number but the number of odd numbers are greater then the number of even numbers by 1
    // so k is decreased by another one
        k -=n/2+2;
        result= start+k*2;
    }
    else{
    // the result is an odd number
        start=1;
        k--;
        result = start+k*2;
    }

    cout<<result<<endl;

    return 0;
}
