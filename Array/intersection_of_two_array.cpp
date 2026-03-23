
// INTERSECTION OF TWO ARRAY
#include <iostream>
using namespace std;

int main(){
    int size1;
    cout<<"Enter the size of the 1st array: ";
    cin>>size1;

    int arr1[size1];
    cout<<"Enter the elements of the 1st array: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of the 2nd array: ";
    cin>>size2;

    int arr2[size2];
    cout<<"Enter the elements of the 2nd array: ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }

    cout << "Intersection of the two arrays: ";
    for(int i=0; i<size1; i++){
        bool alreadyPrinted = false;
        for(int j=0; j<i; j++){
            if(arr1[i]==arr1[j]){
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted){
            continue;
        }
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}