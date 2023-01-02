#include <iostream>

using namespace std;

void swap_cols(int arr[], int index1, int index2){
    arr[index1] += arr[index2];
    arr[index2] = arr[index1] - arr[index2];
    arr[index1] -= arr[index2];

}

void sort_arr(int arr[], int arr_size){

    for(int i=0; i<arr_size;i++){
        for(int j=i+1;j<arr_size;j++){
            if(arr[j] < arr[i])
                swap_cols(arr, i, j);
        }
    }
}

void print_arr(int arr[], int arr_size){
    for(int i =0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int col_num;
    cin>>col_num;
    int cols_cubes_num[col_num];

    for(int i=0; i<col_num;i++){
        cin>>cols_cubes_num[i];
    }
    sort_arr(cols_cubes_num, col_num);
    print_arr(cols_cubes_num, col_num);


    return 0;
}
