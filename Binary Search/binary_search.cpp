// #include <iostream>
// using namespace std;

// int BinarySearch(vector<int>& nums, int target){
//     int start = 0, end = nums.size()-1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(nums[mid]==target){
//             return mid;
//         }else if(nums[mid]>target){
//             end = mid-1;
//         }else{
//             start = mid+1;
//         }
//     }
//     return -1;
// }


// /*
// int binarySearchRecursion(vector<int>& nums, int target, int start, int end){
//     if(start<=end){
//         int mid = start + (end-start)/2;
//         if(nums[mid] == target) return mid;
//         else if(nums[mid]<target) return binarySearchRecursion(nums, target, mid+1, end);
//         else return binarySearchRecursion(nums, target, start, mid-1);
//     }
//     return -1;
// }

// int serchBinaryRec(vector<int>& nums, int target){
//     int start = 0;
//     int end = nums.size()-1;
//     return binarySearchRecursion(nums, target, start, end);
// }
// */


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

//     int target;
//     cout<<"Enter the element you want to find: ";
//     cin>>target;

//     cout<<"Target is at: "<<BinarySearch(nums, target)<<endl;
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

/*
 * the function sameGroupStudent takes particularGroup & studentGroup as its argument
 * and returns how many students belong to that particular activity group
 */
int sameGroupStudent(int particularGroup, string studentGroup) {
    int count = 0;
    char target = '0' + particularGroup; // convert int to char
    for (char c : studentGroup) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int particularGroup;
    string studentGroup;

    // input
    cin >> particularGroup;
    cin >> studentGroup;

    // call function
    int result = sameGroupStudent(particularGroup, studentGroup);

    // output
    cout << result;

    return 0;
}
