
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int>& nums, int size, int target){
//     vector<int> ans;
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
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

//     int target;
//     cout<<"Enter the sum you want to find: ";
//     cin>>target;

//     cout<<"Required ans: ";
//     vector<int> ans = pairSum(nums, size, target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     return 0;
// }




// Pair Sum (pointer approach)     -only works for sorted array
// #include <iostream>
// #include <vector>
// using namespace std;

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

//     int target;
//     cout<<"Enter the target you want to find: ";
//     cin>>target;

//     vector<int> ans;
//     int start=0, end=size-1;

//     while(start<end){
//         int sum = vec[start]+vec[end];
//         if(sum>target){
//             end--;
//         }else if(sum<target){
//             start++;
//         }else{
//             ans.push_back(start);
//             ans.push_back(end);
//             break;
//         }
//     }

//     cout<<"Required ans: ";
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> m;

    for(int i=0; i<nums.size(); i++){
        int rem = target - nums[i];

        if(m.find(rem)!=m.end()){
            return {i,m[rem]};
        }
        m[nums[i]] = i;
    }
    return {-1,-1};
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }

    int target;
    cout<<"Enter the target sum: ";
    cin>>target;

    vector<int> ans = twoSum(nums,target);

    if(ans[0]==-1){
        cout<<"There is no pair sum for this target";
    }else{
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values: " << nums[ans[0]] << " and " << nums[ans[1]] << endl;
    }
    return 0;
}