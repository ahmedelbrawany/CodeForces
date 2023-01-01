#include <iostream>

using namespace std;

void fill_arr(int arr[], int arr_size){
    for(int i=0;i<arr_size;i++)
        cin>>arr[i];
}

void swap_arr_values(int arr[], int position1, int position2){
    arr[position1] += arr[position2];
    arr[position2] = arr[position1]-arr[position2];
    arr[position1] -= arr[position2];
}

void sort_arr(int arr[], int arr_size){
    for(int i=0;i<arr_size;i++){
        for(int j=i+1;j<arr_size;j++){
            if(arr[i]<arr[j])
                swap_arr_values(arr,i,j);
        }
    }
}

int arr_sum(int arr[], int arr_size){
    int sum = arr[0];
    for(int i=1;i<arr_size;i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int coins_num;
    cin>>coins_num;

    int coins[coins_num];
    fill_arr(coins, coins_num);
    sort_arr(coins, coins_num);
    int coins_sum = arr_sum(coins, coins_num);

    int minimum_coins = 0;
    int coins_taken_sum =0;
    for(int i=0;i<coins_num;i++){
        coins_taken_sum+=coins[i];
        minimum_coins++;
        if(coins_taken_sum > coins_sum-coins_taken_sum){
            break;
        }
    }

    cout<<minimum_coins<<endl;

    return 0;
}
