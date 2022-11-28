#include <iostream>

using namespace std;

int main()
{
    int n;
    int personA, personB, personC;
    int counter=0;
    cin>> n;
    for(int i =0; i<n; i++){
        cin>>personA;
        cin>>personB;
        cin>>personC;
        if((personA+personB+personC)> 1)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
