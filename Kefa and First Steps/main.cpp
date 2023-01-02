#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    a[n]= -1;

    int max_subsegment = 1;
    int counter = 1;

    for(int i=0; i<n; i++){
        if(counter > max_subsegment){
            max_subsegment = counter;
        }
        if(a[i+1]>=a[i]){
            counter++;
            continue;
        }
        else{

            counter = 1;
        }
    }
    cout<<max_subsegment<<endl;
    return 0;
}
