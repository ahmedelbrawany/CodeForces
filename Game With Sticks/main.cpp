#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int total_intersections = n*m;
    int counter = 0;
    while(total_intersections!=0){
        total_intersections -= n+m-1;
        n--;
        m--;
        counter++;
    }
    if(counter%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    return 0;
}
