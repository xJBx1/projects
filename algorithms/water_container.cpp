#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height);
int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "The max amount of water that can be stored is: " << maxArea(height) << endl;

    return 0;
}

int maxArea(vector<int>& height){
    int left = 0;
    int right = height.size()-1;
    int area=0;
    while(left<right){
        int water = min(height[left], height[right]) * (right-left);
        area = max(area, water);
        height[right] < height[left] ? right-- : left++;
    }
    return area;
}
