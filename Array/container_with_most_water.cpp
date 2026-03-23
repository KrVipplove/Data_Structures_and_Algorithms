// // CONTAINER WITH MOST WATER   (self)
// #include <iostream>
// using namespace std;

// int maxCapacity(vector<int>& nums){
//     int maxcapacity=0;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             int width=j-i;
//             int height = min(nums[i],nums[j]);
//             int capacity=width*height;
//             maxcapacity=max(maxcapacity,capacity);
//         }
//     }
//     return maxcapacity;
// }

// int main(){
//     int size;
//     cout<<"Entr the size of the array: ";
//     cin>>size;

//     vector<int> nums;
//     cout<<"Enter the elements of the arrary: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

//     cout<<"Maximum capacity of water: "<<maxCapacity(nums)<<endl;
//     return 0;
// }




// CONTAINER WITH MOST WATER (two pointer approach)
#include <iostream>
using namespace std;

int maxWater(vector<int>& nums){
    int maxcapacity = 0;
    int start=0, end=nums.size()-1;

    while(start<end){
        int width = end-start;
        int height = min(nums[start], nums[end]);
        maxcapacity = max(maxcapacity, width*height);
        if(nums[start]<nums[end]){
            start++;
        }else if(nums[start]>nums[end]){
            end--;
        }
    }
    return maxcapacity;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> nums;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        int elements;
        cin>>elements;
        nums.push_back(elements);
    }

    cout<<"Maximum capacity of the container: "<<maxWater(nums)<<endl;
    return 0;
}