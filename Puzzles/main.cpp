#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int puzzels[m];
    for(int i=0;i<m;i++){
        cin>>puzzels[i];
    }
    //sort
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(puzzels[i]>puzzels[j]){
                puzzels[i] += puzzels[j];
                puzzels[j] = puzzels[i] - puzzels[j];
                puzzels[i] -= puzzels[j];
            }
        }
    }
    int minimum = puzzels[n-1]-puzzels[0];
    for(int i=1;i<m-n+1;i++){
        if(puzzels[i+n-1]-puzzels[i]<minimum){
            minimum = puzzels[i+n-1]-puzzels[i];
        }
    }
    cout<<minimum<<endl;

    return 0;
}
