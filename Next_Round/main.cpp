#include <iostream>

using namespace std;

int main()
{
    int n, k ;
    cin>> n;
    cin>> k;
    int scores[n+1];
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    scores[n] = 0;
    if(scores[0]==0){
        cout<<0<<endl;
        return 0;
    }
    const int max_score = scores[k-1];
    int counter = k;
    if(max_score==0){

        for(int i = k-1; scores[i]==0; i--){
            counter--;
        }
        cout<<counter<<endl;
    }
    else{

        for(int i = k; scores[i]>=max_score; i++){
            counter++;
        }
        cout<<counter<<endl;
    }

    return 0;
}
