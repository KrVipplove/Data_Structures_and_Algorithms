#include <iostream>
using namespace std;

bool isValid(vector<int>& nums, int n, int m, int mid){
    int stud = 1, pages = 0;

    for(int i=0; i<n; i++){
        if(nums[i]>mid){
            return false;
        }
        if(pages + nums[i] <= mid){
            pages += nums[i];
        }else{
            stud++;
            pages = nums[i];
        }
    }
    return stud > m ? false : true;
}

int bookAllocation(vector<int>& nums, int n, int m){

    if(m>n) return -1;

    int start = INT_MIN;
    int end=0;
    for(int i=0; i<n; i++){
        start = max(start,nums[i]);
        end += nums[i];
    } 

    int ans=-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isValid(nums, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the total number of books: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the pages in books: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int m;
    cout<<"Enter the total number of students: ";
    cin>>m;

    cout<<"Required page: "<<bookAllocation(nums, n, m)<<endl;
    return 0;

}