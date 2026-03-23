// BUY AND SELL OF STOCK  (self)
// #include <iostream>
// using namespace std;

// int buYSell(vector<int>& nums){
//     int maxProfit = INT_MIN;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=0; j<=i; j++){
//             int profit;
//             profit=nums[i]-nums[j];
//             maxProfit = max(profit, maxProfit);
//         }
//     }
//     if(maxProfit<=0){
//         return 0;
//     }else{
//         return maxProfit;
//     }
// }

// int main(){
//     int days;
//     cout<<"Enter the number of days: ";
//     cin>>days;

//     vector<int> nums;
//     cout<<"Enter the price of the stock each day: ";
//     for(int i=0; i<days; i++){
//         int price;
//         cin>>price;
//         nums.push_back(price);
//     }

//     cout<<"Maximum profit is: "<<buYSell(nums)<<endl;
//     return 0;
// }




// BUY AND SELL OF STOCK (optimised)
#include <iostream>
using namespace std;

int buYSell(vector<int>& stock){
    int maxProfit=0;
    int bestbuy=stock[0];
    for(int i=1; i<stock.size(); i++){
        if(stock[i]>bestbuy){
            maxProfit=max(maxProfit, stock[i]-bestbuy);
        }
        bestbuy = min(bestbuy, stock[i]);
    }
    return maxProfit;
}

int main(){
    int day; 
    cout<<"Enter the number of days: ";
    cin>>day;

    vector<int> stock;
    cout<<"Enter the price of stock each day: ";
    for(int i=0; i<day; i++){
        int price; 
        cin>>price; 
        stock.push_back(price);
    }

    cout<<"Maximum profit is: "<<buYSell(stock)<<endl;
    return 0;
}