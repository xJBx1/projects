#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int minDist(vector<int>& arr, int cows);
bool isValid(vector<int>& arr, int cows, int dist);

int main()
{
    vector<int> arr = {1,2,8,4,9};
    int c = 3;

    cout << "The largest minimum distance is: " << minDist(arr, c);
    return 0;
}

int minDist(vector<int>& arr, int cows){
    int dist=1;
    int n = arr.size()-1;

    //find min and max in arr
    sort(arr.begin(), arr.end());

    int s = 1, e = arr[n]-arr[0];
    
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isValid(arr, cows, mid)) {
            dist = mid;
            s = mid+1;
        } else {
            e = mid-1;
        }
    }
    return dist;
}

bool isValid(vector<int>& arr, int cows, int dist){
    int c=1;
    int lastStall = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] - lastStall >= dist){
            c++;
            lastStall = arr[i];
        }
        if(c==cows) return true;
    }
    return false;

}
