//  Product of array of element except self
// #include <iostream>
// #include <vector>
// using namespace std;

// vector <int> Product(vector<int>& nums){
//     vector <int> ans;
//     for(int i=0; i<nums.size(); i++){
//         int product = 1;
//         for(int j=0; j<nums.size(); j++){
//             if(j!=i){
//                 product *= nums[j];
//             }
//         }
//         ans.push_back(product);
//     }
//     return ans;
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector <int> nums;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

//     vector <int> result = Product(nums);
//     cout<<"Array of products is: ";
//     for(int val: result){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// Product of array except self       (most optimised)
#include <iostream>
using namespace std;

vector<int> ProductExceptSelf(vector<int> &nums){
    vector<int> ans(nums.size(),1);
    for(int i=1; i<nums.size(); i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i=nums.size()-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
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
        int element;
        cin>>element;
        nums.push_back(element);
    }

    vector<int> result = ProductExceptSelf(nums);
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}