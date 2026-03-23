#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    if(s.find(trip) == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSum2(vector<int>& nums){
    int n = nums.size();
    set<vector<int>> uniTrip;

    for(int i=0; i<n; i++){
        int tar = -nums[i];

        set<int> s;
        for(int j=i+1; j<n; j++){
            int third = tar - nums[j];

            if(s.find(third) != s.end()){
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniTrip.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniTrip.begin(), uniTrip.end());
    return ans;
}

vector<vector<int>> threeSum3(vector<int>& nums){
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n;  i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j= i+1, k=n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0){
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;
                while(j<k && nums[j]==nums[j-1]) j++;
            }else if(sum<0){
                j++;
            }else{
                k--;
            }
        }
    }
    return ans;
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
    
    vector<vector<int>> result = threeSum(nums);

    cout<<"Triplet that sum to 0:"<<endl;
    for(auto &trip : result){
        for(int val : trip){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}