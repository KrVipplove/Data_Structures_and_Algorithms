// Majority Element   (brute force)
// #include <iostream>
// using namespace std;

// int MajorityElement(vector<int>& vec){
//     for(int val: vec){
//         int freq=0;
//         for(int el: vec){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > vec.size()/2){
//             return val;
//         }
//     }
//     return -1;
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector<int> vec;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }

//     cout<<"Majority elements int the array: "<<MajorityElement(vec)<<endl;
//     return 0;
// }





// Majority elements in array using sort algorithm
// #include <iostream>
// using namespace std;

// int majorityElement(vector<int>& nums, int size){
//     sort(nums.begin(), nums.end());

//     int freq=1, ans = nums[0];
//     for(int i=1; i<size; i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq>size/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector<int> nums;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

//     cout<<"Majority element in the array: "<<majorityElement(nums,size)<<endl;
//     return 0;
// }





// Majority elements  (MOORE'S VOTING ALGOTITHM)                                                                (most optimised)
#include <iostream>
using namespace std;

int majorityElements(vector<int>& nums){
    int freq=0, ans=0;
    for(int i=0; i<nums.size(); i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
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

    cout<<"Majority element in the array: "<<majorityElements(nums)<<endl;
    return 0;
}