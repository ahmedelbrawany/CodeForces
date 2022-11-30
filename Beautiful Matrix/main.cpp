#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5];
    int one_xcor;
    int one_ycor;
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            cin>>matrix[x][y];
            if(matrix[x][y]==1){
                one_xcor = x;
                one_ycor = y;
            }
        }
    }
    int moves_num = 0;

    if(one_xcor>2)
        moves_num += one_xcor-2;
    else
        moves_num += 2-one_xcor;
    if(one_ycor>2)
        moves_num += one_ycor-2;
    else
        moves_num += 2-one_ycor;

    cout<<moves_num<<endl;

    return 0;
}
