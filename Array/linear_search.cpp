#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    if(size==0){
        return -1;
    }


    vector<int> vec;
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<size; i++){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    
    int target;
    cout<<"Enter the target you want to find: ";
    cin>>target;

    int i;
    for(i=0; i<size; i++){
        if(vec[i]==target){
            cout<<"Target is at: index "<<i<<endl;
        }else{
            continue;
        }
    }
    if(i==size){
        cout<<"Target not found!"<<endl;
    }
    return 0;
}