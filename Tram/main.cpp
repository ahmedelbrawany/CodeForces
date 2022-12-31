#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int exitPassengers;
    int enterPassengers;
    int minimumCapacity = 0;
    int currentCapacity=0;
    while(n>0){
        cin>>exitPassengers>>enterPassengers;
        currentCapacity = currentCapacity - exitPassengers + enterPassengers;
        if(minimumCapacity<currentCapacity)
            minimumCapacity = currentCapacity;

        n--;
    }
    cout<<minimumCapacity<<endl;
    return 0;
}
