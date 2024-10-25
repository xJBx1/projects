#include <iostream>
#include <vector>
using namespace std;

int max_profit(vector<int>& arr);
int main()
{
    vector<int> arr = {7,6,5,4,3,2,2,1};
    cout << "The max profit is: " << max_profit(arr);
    return 0;
}

int max_profit(vector<int>& arr){
    int size = arr.size();
    int best_buy = arr[0];
    int profit=0;
    for(int i=1; i<size; i++){
        if(arr[i]<best_buy){
            best_buy = arr[i];
        } else if ((arr[i]-best_buy)>profit){
            profit = arr[i]-best_buy;
        }
    }
    return profit;

}