// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     int maxSum = INT_MIN;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int start=0; start<size; start++){
//         int currSum = 0;
//         for(int end=start; end<size; end++){
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//         }
//     }
//     cout<<"Maximum sum of subarray: "<<maxSum<<endl;
//     return 0;
// }




// Kadan's algorithm
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array; ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int currSum = 0, maxSum = INT_MIN;
    for(int i=0; i<size; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"Maximum sum: "<<maxSum<<endl;
    return 0;
}
