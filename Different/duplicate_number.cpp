#include <iostream>
using namespace std;

int findDuplicate(vector<int>& nums){
    int slow = nums[0], fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Entre the elements of the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    cout<<"Duplicate element in the array is: "<<findDuplicate(nums)<<endl;

    return 0;
}