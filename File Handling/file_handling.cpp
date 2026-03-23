// WRITING IN A FILE
/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // open the file
    ofstream fout;
    fout.open("zoom.txt");
    // writing in the file
    fout<<"Hello from Riya Sharma"<<endl;
    // closing file to release the resources
    fout.close();

    return 0;
}
*/




// STORING INPUT OF VECTOR IN THE FILE
/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    // size of the array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    // array initialization
    vector<int> arr(n);
    // taking input in the array
    cout<<"Enter the elements of the arrya: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // opening the file
    ofstream fout;
    fout.open("zero.txt");
    // printing array in the file
    fout<<"Original array:"<<endl;
    for(int i=0; i<n; i++){
        fout<<arr[i]<<" ";
    }

    sort(arr.begin(), arr.end());
    fout<<"\nSorted array:"<<endl;
    for(int i=0; i<n; i++){
        fout<<arr[i]<<" ";
    }

    fout.close();

    return 0;
}
*/



// /*
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    ifstream fin("Z2.txt");
    if (!fin) {
        cerr << "Error: Could not open input file." << endl;
        return 1;
    }

    vector<int> arr;
    int num;
    while (fin >> num) {
        arr.push_back(num);
    }
    fin.close();

    sort(arr.begin(), arr.end());

    ofstream fout("Z2.txt"); // overwrite same file
    if (!fout) {
        cerr << "Error: Could not open output file." << endl;
        return 1;
    }

    fout << "Sorted data:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        fout << arr[i] << " ";
    }
    fout << endl;
    fout.close();

    return 0;
}
// */