#include <iostream>
using namespace std;

// Hello world program
// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Hello World!"<<endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){

//     int a; // declaration
//     a = 12; // initialization
//     cout<<"size of int a is "<<sizeof(a)<<endl;

//     float b;
//     cout<<"size of float b is "<<sizeof(b)<<endl;

//     char c;
//     cout<<"size of char c is "<<sizeof(c)<<endl;

//     bool d;
//     cout<<"size of bool d is "<<sizeof(d)<<endl;

//     return 0;
// }




// Multiple "<<"" operator
// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Fuck "<<"you "<<"Bitch "<<endl;
// }




// INPUT/OUTPUT
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter age: ";
//     cin>>age;

//     cout<<"Your age is: "<<age<<endl;
//     return 0;
// }




// ARITHMETIC OPERATION
// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the two integers: ";
//     cin>>a>>b;

//     int sum = a+b;

//     cout<<"Sum is: "<<sum<<endl;
//     cout<<"Difference is: "<<b-a<<endl;
//     cout<<"Product is: "<<a*b<<endl;
//     return 0;
// }




//IF AND ELSE
// #include <iostream>
// using namespace std;

// int main(){
//     int saving;
//     cin>>saving;

//     if(saving>5000){
//         cout<<"Go on date with Hotty Sonam"<<endl;
//     }else{
//         cout<<"Get the fuck out of here"<<endl;
//     }
// }




// triangle is ISOSCELES, SCALENCE OR EQUILATERAL
// #include <iostream>
// using namespace std;

// int main(){
//     int sidea, sideb, sidec;
//     cout<<"Enter the three sides: ";
//     cin>>sidea>>sideb>>sidec;

//     if(sidea==sideb && sideb==sidec){
//         cout<<"Triangle is Equilateral"<<endl;
//     }else if(sidea==sideb || sideb==sidec || sidec==sidea){
//         cout<<"The triangle is Isosceles"<<endl;
//     }else{
//         cout<<"The triangle is Scalence"<<endl;
//     }
//     return 0;
// }




// Sum of numbers till n using for loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }

//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }




// Sum of numbers till n usign while loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int sum=0;
//     int counter = 1;

//     while(counter <=n){
//         sum = sum + counter;
//         counter++;
//     }

//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }




// triangle is ISOSCELES, SCALENCE OR EQUILATERAL
// #include <iostream>
// using namespace std;

// int main(){
//     int sidea, sideb, sidec;
//     cout<<"Enter the sides of the triangle: ";
//     cin>>sidea>>sideb>>sidec;

//     if(sidea==sideb && sideb==sidec){
//         cout<<"Triangle is Equilateral."<<endl;
//     }else if(sidea==sideb || sideb==sidec || sidec==sidea){
//         cout<<"Triangle is Isosceles."<<endl;
//     }else{
//         cout<<"Triangel is Scalance."<<endl;
//     }
//     return 0;
// }




// VOWEL OR CONSONENT
/*
#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter the alphabet: ";
    cin>>c;

    int alpha;
    alpha = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(alpha){
        cout<<"It is a Vowel."<<endl;
    }else{
        cout<<"It is a Consonant."<<endl;
    }
    return 0;
}
*/




// Vowel or Consonent using switch statement
// #include <iostream>
// using namespace std;

// int main(){
//     char c;
//     cout<<"Enter the alphabet: ";
//     cin>>c;

//     switch(c){

//         case 'a':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'e':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'i':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'o':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'u':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'A':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'E':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'I':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'O':
//         cout<<"It is Vowel"<<endl;
//         break;

//         case 'U':
//         cout<<"It is Vowel"<<endl;
//         break;

//         default:
//         cout<<"It is consonent."<<endl;
//     }
//     return 0;
// }




// Max of three give numbers
// #include <iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter three numbers: ";
//     cin>>a>>b>>c;

//     if(a>b){
//         if(a>c){
//             cout<<"Max. is: "<<a<<endl;
//         }else{
//             cout<<"Max. is: "<<c<<endl;
//         }
//     }else if(b>c){
//         cout<<"Max. is: "<<b<<endl;
//     }else{
//         cout<<"Max. is: "<<c<<endl;
//     }
// }




// Find the no. is either even or odd
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     if(n%2==0){
//         cout<<"Number is Even."<<endl;
//     }else{
//         cout<<"Number is Odd."<<endl;
//     }
//     return 0;
// }




// Sum of all odd nos. till n
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int sum = 0;

//     for(int i=1; i<=n; i++){
//         if(i%2==0){
//             continue;
//         }else{
//             sum += i;
//         }
//     }
//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }




// Write a mathematical-table
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no. you want to get the table of: ";
//     cin>>n;

//     for(int i=1; i<=10; i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//     }
//     return 0;
// }




// Prime or not
// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int i;

//     for(i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Non Prime"<<endl;
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"Prime"<<endl;
//     }
//     return 0;
// }




// Prime or not reduced time complexity
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     bool isPrime = true;

//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime == true){
//         cout<<"Above number is Prime."<<endl;
//     }else{
//         cout<<"Above number is Non-Prime."<<endl;
//     }
//     return 0;
// }




// Sum of all numbers from 1 to n divisible by 2
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             continue;
//         }else{
//             sum += i;
//         }
//     }
//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }




// Factorial
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<"Factorial is: "<<fact<<endl;
//     return 0;
// }




// Square Pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of square: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




// Square pattern using character
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         for(int j=1; j<=n; j++){
//             cout<<ch<<" ";
//             ch = ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Square pattern using continuous number
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of square: ";
//     cin>>n;

//     int count = 1;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<count<<" ";
//             count ++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Square pattern using continuous char
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the square: ";
//     cin>>n;

//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Triangle pattern using star
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the length of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Triangle pattern using same number
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the length of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Triangle pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the length of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Reverse Triangle pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the length of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Triangle pattern using continuous number
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the length of the pattern: ";
//     cin>>n;

//     int temp=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<temp<<" ";
//             temp++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Inverted Triangle Pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the pattern: ";
//     cin>>n; 

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=n-i+1; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Pyramid Pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         for(int j=i-1; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Hollow Diamond Pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enterr the side of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         cout<<"* ";
//         for(int j=1; j<=2*i-3; j++){
//             if(i!=1){
//                 cout<<"  ";
//             }
//         }
//         if(i!=1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         cout<<"* ";
//         for(int j=1; j<=2*i-3; j++){
//             if(i!=1){
//                 cout<<"  ";
//             }
//         }
//         if(i!=1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// BUTTDRFLY PATTERN
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the side of the pattern: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         for(int j=1; j<=2*n-2*i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         for(int j=1; j<=2*n-2*i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// FUNCTION CALL
// #include <iostream>
// using namespace std;

// int printHel(){
//     cout<<"Hello World"<<endl;
//     return 4;
// }

// int main(){
//     printHel();
//     cout<<printHel()<<endl;
// }




// Sum of numbers till N
// #include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;

//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     cout<<"Sum from 1 to "<<n<<" is: "<<sumN(n)<<endl;
// }




// N factorial
// #include <iostream>
// using namespace std;

// int factorialN(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     cout<<"Facorial of "<<n<<" is: "<<factorialN(n)<<endl;
// }




// SUM OF DIGITS
// #include <iostream>
// using namespace std;

// int sumOfdigits(int n){
//     int sum = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         sum += lastdigit;
//         n = n/10;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     cout<<"Sum of digits: "<<sumOfdigits(n)<<endl;
//     return 0;
// }




// Calculate nCr = n!/(r! * (n-r)!)
// #include <iostream>
// using namespace std;

// int fact(int n){
//     int factorial = 1;
//     for(int i=1; i<=n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }

// int main(){
//     int n,r;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of r: ";
//     cin>>r;

//     int ans = fact(n)/(fact(n-r)*fact(r));

//     cout<<"Value of nCr is: "<<ans<<endl;
// }




//  Prime or not
// #include <iostream>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     if(isPrime(n)==true){
//         cout<<n<<" is Prime."<<endl;
//     }else{
//         cout<<n<<" is non-Prime"<<endl;
//     }
//     return 0;
// }




// ALL PRIME NUMBERS B/W 2 TO N
// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPrime(int num){
//     for(int i=2; i<=sqrt(num); i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=2; i<=n; i++){
//         if(isPrime(i)==true){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }




// FIBONACCI SEQUENCE
// #include <iostream>
// using namespace std;

// void fibonacci(int n){
//     int t1 = 0;
//     int t2 = 1;
//     int nextterm;

//     for(int i=1; i<=n; i++){
//         cout<<t1<<" ";
//         nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the nth term: ";
//     cin>>n;

//     fibonacci(n);
//     cout<<endl;
//     return 0;
// }




// DECIMAL TO BINARY
// #include <iostream>
// using namespace std;

// int decToBinary(int n){
//     int ans = 0;
//     int pow;
//     while(n>0){
//         int rem = n%2;
//         ans = ans + pow*rem;
//         n = n/2;
//         pow *= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the decimal number: ";
//     cin>>n;

//     cout<<n<<" in binary is: "<<decToBinary(n)<<endl;
//     return 0;
// }




// BINARY TO DECIMAL
// #include <iostream>
// using namespace std;

// int binaryToDecimal(int n){
//     int ans = 0;
//     int pow = 1;

//     while(n>0){
//         int lastdigit = n%10;
//         ans = lastdigit*pow + ans;
//         n = n/10;
//         pow *= 2;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the Binary number: ";
//     cin>>n;
//     cout<<n<<" in Decimal is: "<<binaryToDecimal(n)<<endl;

//     return 0;
// }




// REVERSE THE INTEGER
// #include <iostream>
// using namespace std;

// int reverse(int n){
//     int ans = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         ans = 10*ans + lastdigit;
//         n = n/10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the  number: ";
//     cin>>n;

//     cout<<"Rverse of "<<n<<" is: "<<reverse(n)<<endl;
//     return 0;
// }


// Figure out how to find if a number is power of 2 without any loop.
// #include <iostream>
// using namespace std;

// bool powOf2(int n){
//     if((n & (n-1))!=0){
//         return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     if(powOf2(n)){
//         cout<<"Number is a power of 2."<<endl;
//     }else{
//         cout<<"Number is not a power of 2."<<endl;
//     }
//     return 0;
// }




// SMALLEST/LARGEST IN AN ARRAY
// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int largest = INT_MIN;
//     int smallest = INT_MAX;
//     int largestIndex = -1;
//     int smallestIndex = -1;

//     for(int i=0; i<n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//             largestIndex = i;
//         }
//         if(arr[i]<smallest){
//             smallest = arr[i];
//             smallestIndex = i;
//         }
//     }
//     cout<<"Largest integer in the array is: "<<largest<<endl;
//     cout<<"Smallest integer in the array is: "<<smallest<<endl;
//     cout<<"Index of largest integer in the array is: "<<largestIndex<<endl;
//     cout<<"Index of smallest integer in the array is: "<<smallestIndex<<endl;
//     return 0;
// }




// LINEAR SEARCH
// #include <iostream>
// using namespace std;

// void LinearSearch(int arr[], int size, int target){
//     int i;
//     for(i=0; i<size; i++){
//         if(arr[i]==target){
//             cout<<i<<endl;
//         }
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the arry: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the arry: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"Enter the target you want to find: ";
//     cin>>target;

//     cout<<"Target is at: ";
//     LinearSearch(arr,size,target);
//     cout<<endl;

//     return 0;
// }




// REVERSE THE ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the arry: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int start = 0;
//     int end = size-1;

//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     cout<<"Reversed array: ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// SUM & PRODUCT OF ARRAY
// #include <iostream>
// using namespace std;

// int sumOfArray(int arr[], int size){
//     int sum = 0;
//     for(int i=0; i<size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// int productOfArray(int arr[], int size){
//     int product = 1;
//     for(int i=0; i<size; i++){
//         product *= arr[i];
//     }
//     return product;
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     cout<<"Sum of elements in the array: "<<sumOfArray(arr,size)<<endl;
//     cout<<"Product of elements in the array: "<<productOfArray(arr,size)<<endl;
//     return 0;
// }




// SWAP MAX AND MIN IN ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int maximum = INT_MIN;
//     int minimum = INT_MAX;
//     int maxidx=-1, minidx=-1;

//     for(int i=0; i<size; i++){
//         if(arr[i]>maximum){
//             maximum = arr[i];
//             maxidx = i;
//         }
//         if(arr[i]<minimum){
//             minimum = arr[i];
//             minidx = i;
//         }
//     }

//     swap(arr[minidx],arr[maxidx]);

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// UNIQUE VALUE IN ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     cout << "Unique elements in the array are: ";
//     for(int i=0; i<size; i++){
//         bool isUnique = true;
//         for(int j=0; j<size; j++){
//             if(i!=j && arr[i]==arr[j]){
//                 isUnique = false;
//                 break;
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }




// INTERSECTION OF TWO ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int size1;
//     cout<<"Enter the size of the 1st array: ";
//     cin>>size1;

//     int arr1[size1];
//     cout<<"Enter the elements of the 1st array: ";
//     for(int i=0; i<size1; i++){
//         cin>>arr1[i];
//     }

//     int size2;
//     cout<<"Enter the size of the 2nd array: ";
//     cin>>size2;

//     int arr2[size2];
//     cout<<"Enter the elements of the 2nd array: ";
//     for(int i=0; i<size2; i++){
//         cin>>arr2[i];
//     }

//     cout << "Intersection of the two arrays: ";
//     for(int i=0; i<size1; i++){
//         bool alreadyPrinted = false;
//         for(int j=0; j<i; j++){
//             if(arr1[i]==arr1[j]){
//                 alreadyPrinted = true;
//                 break;
//             }
//         }
//         if(alreadyPrinted){
//             continue;
//         }
//         for(int j=0; j<size2; j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
//     cout<<endl;
//     return 0;
// }




// VECTOR 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> vec = {1,2,3,4,5};
//     cout<<"Size of vector: "<<vec.size()<<endl;
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     vector<int> vec2(5,69);
//     for(int val : vec2){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     vector<int> vec;
//     cout<<"Size of vector: "<<vec.size()<<endl;

//     vec.push_back(69);
//     vec.push_back(88);
//     vec.push_back(100);

//     cout<<"After push back size of vector: "<<vec.size()<<endl;

//     vec.pop_back();

//     cout<<"After pop back size of vector: "<<vec.size()<<endl;
//     cout<<"Elements in the vector are: ";
//     for(int val: vec){                                 //
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// size and capacity of vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec;

//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);

//     cout<<"Size of vector: "<<vec.size()<<endl;
//     cout<<"Capacity of vector: "<<vec.capacity()<<endl;
//     return 0;
// }




// Input and output of vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector<int> vec;
//     cout<<"Enter the elements in the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }

//     cout<<"Your array: ";
//     for(int val: vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// Linear Search using vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     if(size==0){
//         return -1;
//     }


//     vector<int> vec;
//     cout<<"Enter the elements in the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }
    
//     int target;
//     cout<<"Enter the target you want to find: ";
//     cin>>target;

//     int i;
//     for(i=0; i<size; i++){
//         if(vec[i]==target){
//             cout<<"Target is at: "<<i<<endl;
//         }else{
//             continue;
//         }
//     }
//     if(i==size){
//         cout<<"Target not found!"<<endl;
//     }
//     return 0;
// }




// Reverse the array
// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseArray(vector<int>& vec,int size){
//     int start=0;
//     int end = size-1;
    
//     while(start<end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }
//     cout<<"Reversed array: ";
//     for(int val: vec){
//         cout<<val<<" ";
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector<int> vec;
//     cout<<"Enter the elements in the array: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }
//     reverseArray(vec,size);
//     return 0;
// }




// Print all subarrays
// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int start=0; start<size; start++){
//         for(int end=start; end<size; end++){
//             for(int i=start; i<=end; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }




// Sum of subarray
// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int start=0; start<size; start++){
//         int sum = 0;
//         for(int end=start; end<size; end++){
//             sum = sum + arr[end];
//             cout<<sum<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Maximum subarray sum
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


//  KADANE'S ALGORITHM  (above question)
// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter the size of the array; ";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int currSum = 0, maxSum = INT_MIN;
//     for(int i=0; i<size; i++){
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//         if(currSum<0){
//             currSum = 0;
//         }
//     }
//     cout<<"Maximum sum: "<<maxSum<<endl;
//     return 0;
// }


// Pair Sum
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
//     int start, end;

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




// Above question using function
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int>& nums, int size, int target){
//     vector<int> ans;
//     int start=0, end=size-1;
//     while(start<end){
//         int sum=nums[start]+nums[end];
//         if(sum>target){
//             end--;
//         }else if(sum<target){
//             start++;
//         }else{
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
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




// Majority Element   (brute force)
// #include <iostream>
// using namespace std;

// int MajorityElement(vector<int>& vec){
//     for(int val: vec){
//         int freq=0;
//         for(int el: vec){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > vec.size()/2){
//             return val;
//         }
//     }
//     return -1;
// }

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

//     cout<<"Majority elements int the array: "<<MajorityElement(vec)<<endl;
//     return 0;
// }




// Majority elements in array using sort algorithm
// #include <iostream>
// using namespace std;

// int majorityElement(vector<int>& nums, int size){
//     sort(nums.begin(), nums.end());

//     int freq=1, ans = nums[0];
//     for(int i=1; i<size; i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq>size/2){
//             return ans;
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

//     cout<<"Majority element in the array: "<<majorityElement(nums,size)<<endl;
//     return 0;
// }




// Majority elements  (MOORE'S VOTING ALGOTITHM)                                                                (most optimised)
// #include <iostream>
// using namespace std;

// int majorityElements(vector<int>& nums){
//     int freq=0, ans=0;
//     for(int i=0; i<nums.size(); i++){
//         if(freq==0){
//             ans = nums[i];
//         }if(ans == nums[i]){
//             freq++;
//         }else{
//             freq--;
//         }
//     }
//     return ans;
// }

// int majorityElements(vector <int>& nums){
//     int freq=0, ans=0;
//     for(int val: nums){
//         if(freq==0){
//             ans = val;
//         }if(ans == val){
//             freq++;
//         }else{
//             freq--;
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
//         int elements;
//         cin>>elements;
//         nums.push_back(elements);
//     }

//     cout<<"Majority element in the array: "<<majorityElements(nums)<<endl;
//     return 0;
// }




// Pow(x,n)
// #include <iostream>
// using namespace std;

// double powOfNToX(int power, int base){
//     long binaryForm=power;
//     if(power==0) return 1;
//     if(power<0){
//         base = 1/base;
//         binaryForm = -binaryForm;
//     }
//     if(base==-1 && power%2==0) return 1.0;
//     if(base ==-1 && power%2!=0) return -1.0;

//     double ans = 1;

//     while(binaryForm>0){
//         if(binaryForm%2==1){
//             ans *= base; 
//         }
//         binaryForm /= 2;
//         base *= base;
//     }
//     return ans;
// }

// int main(){
//     int base;
//     cout<<"Enter the base: ";
//     cin>>base;

//     int power;
//     cout<<"Enter the power: ";
//     cin>>power;

//     cout<<"Value of x^n: "<<powOfNToX(power, base)<<endl;
//     return 0;
// }




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
// #include <iostream>
// using namespace std;

// int buYSell(vector<int>& stock){
//     int maxProfit=0;
//     int bestbuy=stock[0];
//     for(int i=1; i<stock.size(); i++){
//         if(stock[i]>bestbuy){
//             maxProfit=max(maxProfit, stock[i]-bestbuy);
//         }
//         bestbuy = min(bestbuy, stock[i]);
//     }
//     return maxProfit;
// }

// int main(){
//     int day; 
//     cout<<"Enter the number of days: ";
//     cin>>day;

//     vector<int> stock;
//     cout<<"Enter the price of stock each day: ";
//     for(int i=0; i<day; i++){
//         int price; 
//         cin>>price; 
//         stock.push_back(price);
//     }

//     cout<<"Maximum profit is: "<<buYSell(stock)<<endl;
//     return 0;
// }




// // CONTAINER WITH MOST WATER   (self)
// #include <iostream>
// using namespace std;

// int maxCapacity(vector<int>& nums){
//     int maxcapacity=0;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             int width=j-i;
//             int height = min(nums[i],nums[j]);
//             int capacity=width*height;
//             maxcapacity=max(maxcapacity,capacity);
//         }
//     }
//     return maxcapacity;
// }

// int main(){
//     int size;
//     cout<<"Entr the size of the array: ";
//     cin>>size;

//     vector<int> nums;
//     cout<<"Enter the elements of the arrary: ";
//     for(int i=0; i<size; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

//     cout<<"Maximum capacity of water: "<<maxCapacity(nums)<<endl;
//     return 0;
// }




// CONTAINER WITH MOST WATER (two pointer approach)
// #include <iostream>
// using namespace std;

// int maxWater(vector<int>& nums){
//     int maxcapacity = 0;
//     int start=0, end=nums.size()-1;

//     while(start<end){
//         int width = end-start;
//         int height = min(nums[start], nums[end]);
//         maxcapacity = max(maxcapacity, width*height);
//         if(nums[start]<nums[end]){
//             start++;
//         }else if(nums[start]>nums[end]){
//             end--;
//         }
//     }
//     return maxcapacity;
// }
// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;

//     vector<int> nums;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<size; i++){
//         int elements;
//         cin>>elements;
//         nums.push_back(elements);
//     }

//     cout<<"Maximum capacity of the container: "<<maxWater(nums)<<endl;
//     return 0;
// }




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
// #include <iostream>
// using namespace std;

// vector<int> ProductExceptSelf(vector<int> &nums){
//     vector<int> ans(nums.size(),1);
//     for(int i=1; i<nums.size(); i++){
//         ans[i] = ans[i-1] * nums[i-1];
//     }
//     int suffix = 1;
//     for(int i=nums.size()-2; i>=0; i--){
//         suffix *= nums[i+1];
//         ans[i] *= suffix;
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

//     vector<int> result = ProductExceptSelf(nums);
//     for(int val: result){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }




// book allocation
// #include <iostream>
// using namespace std;

// bool isValid(vector<int>& nums, int n, int m, int mid){
//     int stud = 1, pages = 0;
//     for(int i=0; i<n; i++){
//         if(nums[i]>mid){
//             return false;
//         }
//         if((pages + nums[i]) <= mid){
//             pages += nums[i];
//         }else{
//             stud++;
//             pages = nums[i];
//         }
//     }
//     return stud > m ? false : true;
// }

// int bookAllocation(vector<int>& nums, int n, int m){

//     if(m>n) return -1;

//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum += nums[i];
//     }
//     int start = 0, end = sum;
//     int ans;
//     while(start<end){
//         int mid = start + (end - start)/2;
//         if(isValid(nums, n, m, mid)){
//             ans = mid;
//             end = mid-1;
//         }else{
//             start = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the total number of books: ";
//     cin>>n;

//     vector<int> nums;
//     cout<<"Enter the number of pages in books: ";
//     for(int i=0; i<n; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

//     int m;
//     cout<<"Enter the total number of students: ";
//     cin>>m;

//     cout<<"Minimum - maximum pages: "<<bookAllocation(nums, n, m)<<endl;
//     return 0;
// }



// NEXT PERMUTATION
// #include <iostream>
// using namespace std;

// void nextPermutation(vector<int>& nums, int n){
//     int pivot = -1;
//     for(int i=n-1; i>=0; i--){
//         if(nums[i]<nums[i+1]){
//             pivot = i;
//             break;
//         }
//     }
                                                                                     //      NEED TO COMPLETE
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         int element;
//         cin>>element;
//         nums.push_back(element);
//     }

// }



// VALID PALINDROME
// #include <iostream>
// using namespace std;

// bool isPalindrome(string str){
//     string str1=str;
//     int start = 0, end = str.size()-1;
//     while(start<end){
//         swap(str1[start++],str1[end--]);
//     }
//     return str==str1;
// }

// int main(){
//     string str;
//     cout<<"Enter your string: ";
//     getline(cin,str);

//     if(isPalindrome(str)){
//         cout<<"Your input string is a Palindrome."<<endl;
//     }else{
//         cout<<"Your input string is not a Palindrome."<<endl;
//     }
//     return 0;

// }



// permutation in string
// #include <iostream>
// #include <vector>
// using namespace std;

// bool permutationInString(string s1, string s2){
//     int n1 = s1.length(), n2 = s2.length();
//     if(n1>n2) return false;

//     vector<int> freq(26,0), winFreq(26,0);
//     for(int i=0; i<n1; i++){
//         freq[s1[i] - 'a']++;
//         winFreq[s2[i] - 'a']++;
//     }
//     if(freq == winFreq) return true;

//     for(int i=n1; i<n2; i++){
//         winFreq[s2[i] - 'a']++;
//         winFreq[s2[i-n1] - 'a']--;
//         if (freq == winFreq) return true;
//     }
//     return false;
// }

// int main(){
//     string s1;
//     cout<<"Enter the first string: ";
//     getline(cin,s1);

//     string s2;
//     cout<<"Enter the second string: ";
//     getline(cin, s2);

//     if(!permutationInString(s1,s2)){
//         cout<<"String s2 doesn't contains the permutation of string s1"<<endl;
//     }else{
//         cout<<"String s2 contains the permutation of string s1"<<endl;
//     }
// }


// reverse the word in the string
// #include <iostream>
// using namespace std;

// string reverseWordInString(string s){
//     int n = s.length();
//     string ans = "";
//     reverse(s.begin(), s.end());

//     for(int i=0; i<n; i++){
//         string word;
//         while(s[i] != ' ' && i<n){
//             word += s[i++];
//         }
//         reverse(word.begin(), word.end());
//         if(word.length()>0){
//             ans += " "+word;
//         }
//     }
//     return ans.substr(1);
// }

// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     getline(cin, s);

//     cout<<"Reversed word in string: "<<reverseWordInString(s)<<endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     vector<char> chars(s.begin(), s.end()); // convert string to vector<char>

//     cout << "Characters: ";
//     for(char c : chars) {
//         cout << c << " ";
//     }
//     cout << endl;
//     return 0;
// }


// 2D array
// #include <iostream>
// using namespace std;

// int main(){
//     int row;
//     cout<<"Enter the number of rows: ";
//     cin>>row;

//     int column;
//     cout<<"Enter the number of columns: ";
//     cin>>column;

//     int matrix[row][column];
//     cout<<"Enter the elements of the matrix: ";
//     for(int i=0; i<row; i++){
//         for(int j=0; j<column; j++){
//             cin>>matrix[i][j];
//         }
//     }

//     cout<<"Your matrix: "<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<column; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     vector<vector<int>> matrix(rows);

//     for (int i = 0; i < rows; i++) {
//         int cols;
//         cout << "Enter number of elements in row " << i + 1 << ": ";
//         cin >> cols;

//         matrix[i].resize(cols);
//         cout << "Enter " << cols << " elements for row " << i + 1 << ": ";
//         for (int j = 0; j < cols; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "\nMatrix is:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < matrix[i].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         cout<<"Happy Birthday"<<endl;
//         return;
//     }
//     cout<<n<<" days left for birthday"<<endl;
//     print(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the days left in birthday: ";
//     cin>>n;

//     while(n < 0){
//         cout << "Negative input is not valid. Please enter a non-negative number: ";
//         cin >> n;
//     }

//     print(n);
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void generateSubsets(vector<int>& nums, vector<int>& current, int i, vector<vector<int>>& result) {
//     if (i == nums.size()) {
//         result.push_back(current);  // store the current subset
//         return;
//     }

//     // ✅ Include nums[i]
//     current.push_back(nums[i]);
//     generateSubsets(nums, current, i + 1, result);

//     // ❌ Exclude nums[i] (backtrack)
//     current.pop_back();
//     generateSubsets(nums, current, i + 1, result);
// }

// vector<vector<int>> subsets(vector<int>& nums) {
//     vector<vector<int>> result;
//     vector<int> current;
//     generateSubsets(nums, current, 0, result);
//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<vector<int>> allSubsets = subsets(nums);

//     cout << "All subsets are:\n";
//     for (auto& subset : allSubsets) {
//         cout << "{ ";
//         for (int val : subset) {
//             cout << val << " ";
//         }
//         cout << "}\n";
//     }

//     return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;

// // Recursive function to print all subsets (power set)
// void printSubset(vector<int>& nums, vector<int>& ans, int i) {
//     // Base case: if we have considered all elements
//     if (i == nums.size()) {
//         cout << "Reached base case with i = " << i << ", subset: ";
//         for (int val : ans) {
//             cout << val << " ";
//         }
//         cout << endl;
//         return;
//     }

//     // Include nums[i] in the current subset
//     cout << "Include nums[" << i << "] = " << nums[i] << endl;
//     ans.push_back(nums[i]);
//     printSubset(nums, ans, i + 1);

//     // Backtrack and exclude nums[i]
//     ans.pop_back();
//     cout << "Exclude nums[" << i << "] = " << nums[i] << endl;
//     printSubset(nums, ans, i + 1);
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> nums;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         int element;
//         cin >> element;
//         nums.push_back(element);
//     }

//     vector<int> ans; // To store current subset
//     cout << "\nAll subsets (power set) with tracing:\n";
//     printSubset(nums, ans, 0);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         if(i%3 == 0){
//             continue;
//         }
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     int nL = n<<1;
//     int nR = n>>1;

//     cout<<"Left shift: "<<nL<<endl;
//     cout<<"Right shift: "<<nR<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void insertionSort(vector<int>& nums, int n){
//     for(int i=1; i<n; i++){
//         int curr = nums[i];
//         int pre = i-1;

//         while(pre>=0 && nums[pre]>curr){
//             nums[pre+1] = nums[pre];
//             pre--;
//         }
//         nums[pre+1] = curr;
//     }
// }

// void printArray(vector<int>& nums, int n){
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     insertionSort(nums, n);
//     printArray(nums, n);

//     return 0;
// }




// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// Node* createLinkedList(vector<int>& nums, int idx, int n){
//     if(idx == n){
//         return NULL;
//     }

//     Node* newNode = new Node(nums[idx]);
//     newNode->next = createLinkedList(nums, idx+1, n);

//     return newNode;
// }

// Node* reverseLinkedList(Node* head, Node* pre){
//     if(head == NULL){
//         return pre;
//     }

//     Node* nextNode = head->next;
//     head->next = pre;

//     return reverseLinkedList(nextNode, head);
// }

// void printLinkedList(Node* head){
//     while(head != NULL){
//         cout<<head->data<<"->";
//         head = head->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the linked list: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the linked list: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     Node* head = createLinkedList(nums, 0, n);
//     printLinkedList(head);

//     head= reverseLinkedList(head, NULL);
//     printLinkedList(head);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// vector<int> rightLength(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,n);
//     stack<int> s;

//     for(int i=0; i<n; i++){

//         while(!s.empty() && nums[i] < nums[s.top()]){
//             ans[s.top()] = i - s.top();
//             s.pop();
//         }

//         s.push(i);
//     }

//     while(!s.empty()){                  // in case no smaller on right
//         ans[s.top()] = n - s.top();
//         s.pop();
//     }

//     return ans;
// }

// int main(){
//     vector<int> nums = {5,5,4,5,5};

//     vector<int> res = rightLength(nums);

//     for(int val : res){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// // NEXT GREATER ELEMENT (forward loop)
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreater(vector<int>& nums){
//     int n = nums.size();

//     vector<int> ans(n,-1);
//     stack<int> s;

//     for(int i=0; i<n; i++){
//         while(!s.empty() && nums[i] > nums[s.top()]){
//             ans[s.top()] = nums[i];
//             s.pop();
//         }

//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     vector<int> res = nextGreater(nums);
//     cout<<"Next Greater elements of nums[i]: ";
//     for(int val : res){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// NEXT GREATER ELEMENT (backward loop)
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreater(vector<int>& nums){
//     int n = nums.size();

//     vector<int> ans(n,-1);
//     stack<int> s;

//     for(int i=n-1; i>=0; i--){
        
//         while(!s.empty() && nums[s.top()] > nums[i]){
//             s.pop();
//         }

//         if(!s.empty()){
//             ans[i] = nums[s.top()];
//         }

//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     vector<int> res = nextGreater(nums);
//     cout<<"Next Greater elements if nums[i]: ";
//     for(int val : res){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// AAYANSH RAJ
// KUMAR VIPPLOVE
// VISHWAJEET KUMAR
// SREYANSH RAJ
// KUM KUM MALA
// NEMIKA MALA
// VIJAY KUMAR MANDAL
// URWASHI KUMARI
// NAROTTAM KUMAR GAUTAM
// NIRMALA DEVI
// KABITA KUMARI
// TANNU SHREE
// KAUSHAL CHANDRA
// UJJWAL CHANDRA
// PRABHI MANDAL
// PUNAM KUMARI
// AAYANSH RAJ



// NEXT GREATER ELEMENT ( FORWARD LOOP )
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreater(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,-1);
//     stack<int> s;

//     for(int i=0; i<n; i++){

//         while(!s.empty() && nums[i] > nums[s.top()]){
//             ans[s.top()] = nums[i];
//             s.pop();
//         }
//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     vector<int> res = nextGreater(nums);

//     cout<<"Next Greater elements is/are: ";
//     for(int val : res){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// NEXT GREATER ELEMENT (BACKWARD LOOP ON ARRAY)
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreater(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,-1);
//     stack<int> s;

//     for(int i=n-1; i>=0; i--){

//         while(!s.empty() && nums[i] >= nums[s.top()]){
//             s.pop();
//         }
//         if(!s.empty()){
//             ans[i] = nums[s.top()];
//         }
//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     vector<int> res = nextGreater(nums);

//     cout<<"Next Greater elements is/are: ";
//     for(int val : res){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// LARGEST RECTANGLE IN HISTOGRAM
/*
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> leftSmaller(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[s.top()] >= nums[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}

vector<int> rightSmaller(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,n);
    stack<int> s;

    for(int i=0; i<n; i++){

        while(!s.empty() && nums[i] <= nums[s.top()]){
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    return ans;
}

int largestRectangle(vector<int>& nums){
    int n = nums.size();
    int maxArea = 0;

    vector<int> left = leftSmaller(nums);
    vector<int> right = rightSmaller(nums);

    for(int i=0; i<n; i++){
        int width = (right[i] - left[i] -1);

        maxArea = max(maxArea, nums[i] * width);
    }
    return maxArea;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int maxAreaRect = largestRectangle(nums);

    cout<<"Area of largest Rectangle is: "<<maxAreaRect<<endl;

    return 0;
}
*/



// LARGEST RECTANGLE IN HISTOGRAM (single pass)
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int largestRectangle(vector<int>& nums){
//     int n = nums.size();
//     int maxArea = 0;
//     stack<int> s;

//     for(int i=0; i<=n; i++){
        
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }

//     int maxArea = largestRectangle(nums);

//     cout<<"Area of largest Rectangle is: "<<maxArea<<endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> PreSmaller(vector<int>& nums){
//     int n = nums.size();

//     vector<int> ans(n,-1);
//     stack<int> s;

//     for(int i=0; i<n; i++){

//         while(!s.empty() && nums[s.top()] >= nums[i]){
//             s.pop();
//         }

//         if(!s.empty()){
//             ans[i] = nums[s.top()];
//         }

//         s.push(i);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int> nums(n);
    
//     cout<<"Enter the elements of the array: ";
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     return 0;
// }



// KADANE'S ALGORITHM
// int maxSubarraySum(vector<int>& nums){
//     int n = nums.size();
//     int currSum = 0;
//     int maxSum = INT_MIN;

//     for(int i=0; i<n; i++){
//         currSum += nums[i];
//         maxSum = max(maxSum, currSum);

//         if(currSum < 0){
//             currSum = 0;
//         }
//     }
//     return maxSum;
// }



// MOORE'S VOTING ALGORITHM
// int majorityElements(vector<int>& nums){
//     int n = nums.size();
//     int freq = 0;
//     int ans = 0;

//     for(int i=0; i<n; i++){
//         if(freq == 0){
//             ans = nums[i];
//         }
//         if(ans == nums[i]){
//             freq++;
//         }else{
//             freq--;
//         }
//     }
//     return ans;
// }



// POW(X,N)
// int powerofNtoX(int base, int power){
//     int binaryform = power;
//     int ans = 1;

//     while(binaryform > 0){
//         if(binaryform%2 == 1){
//             ans *= base;
//         }
//         binaryform /= 2;
//         base *= base;
//     }
//     return ans;
// }



// BUY AND SELL OF STOCK
// int buyAndSell(vector<int>& nums){
//     int n = nums.size();
//     int maxProfit = 0;
//     int bestBuy = nums[0];

//     for(int i=1; i<n; i++){
//         if(nums[i] > bestBuy){
//             maxProfit = max(maxProfit, nums[i] - bestBuy);
//         }
//         bestBuy = min(bestBuy, nums[i]);
//     }
//     return maxProfit;
// }



// PRODUCT OF ARRAY EXCEPT SELF
// vector<int> productOfArrayExceptSelf(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,1);

//     for(int i=1; i<n; i++){
//         ans[i] = ans[i-1] * nums[i-1];
//     }
//     int suffix = 1;
//     for(int i = n-2; i>=0; i--){
//         suffix *= nums[i+1];
//         ans[i] *= suffix;
//     }

//     return ans;
// }



// GENERATE ALL SUBSETS
// void helper(vector<int>& nums, int i, vector<int>& ans, vector<vector<int>>& subset){
//     if(i==nums.size()){
//         subset.push_back(ans);
//         return;
//     }

//     ans.push_back(nums[i]);
//     helper(nums, i+1, ans, subset);
//     ans.pop_back();
//     helper(nums, i+1, ans, subset);
// }

// vector<vector<int>> getSubset(vector<int>& nums){
//     vector<vector<int>> subset;
//     vector<int> ans;
//     helper(nums, 0, ans, subset);
//     return subset;
// }



// LEVEL ORDER TRAVERSAL
// #include <queue>
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x){
//         data = x;
//         left = right = nullptr;
//     }
// };

// vector<vector<int>> levelOrderTreaversal(Node* root){
//     vector<vector<int>> ans;
    
//     if(root == nullptr) return ans;

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         vector<int> level;
//         int size = q.size();

//         for(int i=0; i<size; i++){
//             Node* temp = q.front();
//             q.pop();

//             level.push_back(temp->data);

//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }

//         ans.push_back(level);
//     }
//     return ans;
// }



// CREATION OF BINARY TREE (level wise)
// #include <iostream>
// #include <queue>
// using namespace std;

// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = nullptr;
//     }
// };

// int main(){
//     int x;
//     cout<<"Enter the root node: ";
//     cin>>x;

//     Node* root = new Node(x);

//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         int leftChild;
//         cout<<"Enter the left child of "<<temp->data<<": ";
//         cin>>leftChild;

//         if(leftChild != -1){
//             temp->left = new Node(leftChild);
//             q.push(temp->left);
//         }

//         int rightChild;
//         cout<<"Enter the right child of "<<temp->data<<": ";
//         cin>>rightChild;

//         if(rightChild != -1){
//             temp->right = new Node(rightChild);
//             q.push(temp->right);
//         }
//     }
//     return 0;
// }



// LARGEST BINARY SEARCH TREE
/*
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


struct Box{
    bool BST;
    int size;
    int maxVal;
    int minVal;

    Box(){
        BST = 1;
        size = 0;
        maxVal = INT_MIN;
        minVal = INT_MAX;
    }
};


Node* binaryTree(){
    int x;
    cin>> x;

    if(x == -1){
        return nullptr;
    }

    Node* temp = new Node(x);

    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = binaryTree();

    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = binaryTree();

    return temp;
}


Box* helper(Node* root, int& maxSize){
    if(!root) return new Box();

    Box* leftBox = helper(root->left, maxSize);
    Box* rightBox = helper(root->right, maxSize);

    if(leftBox->BST && rightBox->BST && root->data > leftBox->maxVal && root->data < rightBox->minVal){
        Box* curr = new Box();
        curr->size = 1 + leftBox->size + rightBox->size;
        curr->minVal = min(root->data, leftBox->minVal);
        curr->maxVal = max(root->data, rightBox->maxVal);

        maxSize = max(maxSize, curr->size);
        return curr;
    }

    Box* curr = new Box();
    curr->BST = 0;
    return curr;
}


int largestBST(Node* root){
    if(!root) return 0;

    int maxSize = 0;
    helper(root, maxSize);

    return maxSize;
}


int main(){
    cout<<"Enter the value of root: ";
    Node* root = binaryTree();

    cout<<"Size of largest BST in the input tree is: "<<largestBST(root)<<endl;
    
    return 0;
}
*/




// sum of all nodes of largest binary search tree
/*
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


struct Box{
    bool BST;
    int sum;
    int minVal;
    int maxVal;

    Box(){
        BST = 1;
        sum = 0;
        minVal = INT_MAX;
        maxVal = INT_MIN;
    }
};


Node* binaryTree(){
    int x;
    cin>>x;

    if(x == -1) return nullptr;

    Node* temp = new Node(x);

    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = binaryTree();

    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = binaryTree();

    return temp;
}


Box helper(Node* root, int& maxSum){
    if(!root) return Box();

    Box leftBox = helper(root->left, maxSum);
    Box rightBox = helper(root->right, maxSum);

    if(leftBox.BST && rightBox.BST && root->data > leftBox.maxVal && root->data < rightBox.minVal){
        Box curr = Box();
        curr.sum = root->data + leftBox.sum + rightBox.sum;
        curr.minVal = min(root->data, leftBox.maxVal);
        curr.maxVal = max(root->data, rightBox.minVal);

        maxSum = max(maxSum, curr.sum);

        return curr;
    }

    Box curr = Box();
    curr.BST = 0;

    return curr;
}


int largestBSTsum(Node* root){
    if(!root) return 0;

    int maxSum = 0;

    helper(root, maxSum);

    return maxSum;
}


int main(){
    cout<<"Enter the value of root node: ";
    Node* root = binaryTree();

    cout<<"Sum of all nodes of largest BST is: "<<largestBSTsum(root)<<endl;

    return 0;
}
*/



// LARGEST BST

// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = nullptr;
//     }
// };


// struct Box{
//     bool BST;
//     int size;
//     int maxVal;
//     int minVal;

//     Box(){
//         BST = 1;
//         size = 0;
//         maxVal = INT_MIN;
//         minVal = INT_MAX;
//     }
// };


// Node* binaryTree(){
//     int x;
//     cin>>x;

//     if(x == -1) return nullptr;

//     Node* temp = new Node(x);

//     cout<<"Enter the left child of "<<x<<" : ";
//     binaryTree();

//     cout<<"Enter the right child of "<<x<<" : ";
//     binaryTree();
// }


// Box helper(Node* root, int& maxSize){
//     if(!root) return Box();

//     Box leftBox = helper(root->left, maxSize);
//     Box rightBox = helper(root->right, maxSize);

//     if(leftBox.BST && rightBox.BST && root->data > leftBox.maxVal && root->data < rightBox.minVal){
//         Box curr = Box();
//         curr.size = 1 + leftBox.size + rightBox.size;
//         curr.maxVal = max(root->data, leftBox.maxVal);
//         curr.minVal = min(root->data, rightBox.minVal);

//         maxSize = max(maxSize, curr.size);
//         return curr;
//     }

//     Box curr = Box();
//     curr.BST = 0;
//     return curr;
// }


// int largestBST(Node* root){
//     if(!root) return 0;

//     int maxSize = 0;
//     helper(root, maxSize);

//     return maxSize;
// }


// int main(){
//     cout<<"Enter the value of root: ";
//     Node* root = binaryTree();

//     cout<<"Size of largest BST in the input tree is: "<<largestBST(root)<<endl;

//     return 0;
// }



// Max Heap
/*
class MaxHeap{

    int *arr;
    int size;
    int total_size;

    MaxHeap(int value){
        arr = new int[6];
        size = 0;
        total_size = value;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        while(index > 0 && arr[(index-1)/2] > arr[index]){
            swap(arr[(index-1)/2], arr[index]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" inserted into the Heap"<<endl;
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.print();
    H1.insert(24);
    H1.insert(2);
    H1.insert(7);
    H1.print();
    H1.insert(6);
    H1.print();
}
*/



// int main(){
//     char c = '8';
//     cout<<c<<endl;

//     char a = 97;
//     cout<<a<<endl;

//     return 0;
// }



// int main(){
//     char c = 590;
//     cout<<c<<endl;

//     int a = 'N';
//     cout<<a<<endl;
//     return 0;
// }



// find maximum and minimum in the array
/*
#include <iostream>
using namespace std;

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

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++){
        maxNo = max(maxNo, nums[i]);
        minNo = min(minNo, nums[i]);
    }
    
    cout<<"Maximum: "<<maxNo<<" Minimum: "<<minNo<<endl;
    return 0;
}
*/



// Linear Search
/*
#include <iostream>
using namespace std;

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

    int key;
    cout<<"Enter the number you want to find: ";
    cin>>key;

    int i;
    for(i=0; i<n; i++){
        if(nums[i] == key){
            cout<<"Element is at index: "<<i<<endl;
        }
    }

    if(i==n){
        cout<<"Element doesn't exist"<<endl;
    }
    return 0;
}
*/



// Binary Search
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int key;
    cout<<"Enter the value you want to find: ";
    cin>>key;

    int s = 0, e=n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(nums[mid] == key){
            cout<<"Element is at index: "<<mid<<endl;
            return 0;
        }else if(key > nums[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }

    cout<<"Element doesn't exist."<<endl;
    
    return 0;
}
*/



// SELECTION SORT
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[j] < nums[i]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/




// BUBBLE SORT
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0; j<n-1-i; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}
*/




// SELECTION SORT
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[j] < nums[i]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }


    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/




// BUBBLE SORT
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        int swapped = false;
        for(int j=0; j<n-1-i; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/




// INSERTION SORT
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=1; i<n; i++){
        int swapped = false;
        for(int j=i; j>0; j--){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
                swapped = true;
            }else{
                break;
            }
        }
        if(!swapped) break;
    }

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/




// MAXIMUM SUBARRAY SUM OR KADANE'S ALGORITHM
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array; ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array; ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int currSum = 0;
    int maxSum = 0;
    for(int i=0; i<n; i++){
        currSum += nums[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    cout<<"Maximum subarray sum: "<<maxSum<<endl;
    return 0;
}
*/




// SELECTION SORT
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        int swapped = false;
        for(int j=i+1; j<n; j++){
            if(nums[i] > nums[j]){
                swap(nums[i], nums[j]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/




// BOOK ALLOCATION
/*
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& nums, int n, int m, long long mid){
    int stud = 1, pages = 0;
    for(int i=0; i<n; i++){
        if(nums[i] > mid) return false;

        if(pages + nums[i] <= mid){
            pages += nums[i];
        }else{
            stud++;
            pages = nums[i];
        }
    }
    return stud > m ? false : true;
}

int main(){
    int n;
    cout<<"Enter the total number of books: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int m;
    cout<<"Enter the number of students: ";
    cin>>m;

    if(m > n) return -1;
    
    long long int sum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }

    int start = 0, end = sum, ans = -1;

    while(start <= end){
        long long mid = start + (end-start)/2;
        
        if(isValid(nums, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<"Minimum of maximum pages allowed single student is: "<<ans<<endl;

    return 0;
}
*/




// AGGRESSIVE COWS
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& nums, int n, int c, int mid){
    int cow = 1, lastPos = nums[0];

    for(int i=0; i<n; i++){
        if(nums[i] - lastPos >= mid){
            cow++;
            lastPos = nums[i];
        }
        if(cow == c) return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the total number of stalls: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the positions of stalls: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int c;
    cout<<"Enter the no. of cows: ";
    cin>>c;

    sort(nums.begin(), nums.end());
    int start = 1;
    int end = nums[n-1] - nums[0];
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isValid(nums, n, c, mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    
    cout<<"Maximum possible minimum distance between two cows: "<<ans<<" unit/s"<<endl;
    return 0;
}
*/




// PAINTER'S PARTITION
/*
bool isValid(vector<int>& nums, int n, int p, int mid){
    int labour = 1;
    int time = 0;

    for(int i=0; i<n; i++){
        if(nums[i] > mid) return false;
        if(time + nums[i] <= mid){
            time += nums[i];
        }else{
            labour++;
            time = nums[i];
        }
    }
    return labour > p ? false : true;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total number of boards: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the lengths of each board: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int p;
    cout<<"Enter the number of labours: ";
    cin>>p;

    int start = 0, end = 0, ans = -1;
    for(int i=0; i<n; i++){
        start = max(start, nums[i]);
        end += nums[i];
    }

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isValid(nums, n, p, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<"Minimum time required to do job: "<<ans<<endl;
    return 0;
}
*/




// MAX HEAP
/*
#include <iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        
        arr[size] = value;
        int index = size;
        size++;

        while(index >= 0 && arr[(index-1)/2] < arr[index]){
            swap(arr[(index-1)/2], arr[index]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" is inserted into the MaxHeap"<<endl;
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx + 1;
        int right = 2*idx + 2;

        if(size > left && arr[left] > arr[largest]) largest = left;
        if(size > right && arr[right] > arr[largest]) largest = right;

        if(largest != idx){
            swap(arr[largest], arr[idx]);
            idx = largest;
            Heapify(idx);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" is deleted from maxHeap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0) return;

        Heapify(0);
    }

    void printHeap(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(14);
    H1.insert(4);
    H1.insert(10);
    H1.printHeap();
    H1.insert(20);
    H1.insert(30);
    H1.insert(0);
    H1.printHeap();
    H1.Delete();
    H1.printHeap();
}
*/




// MIN HEAP
/*
#include <iostream>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int total_size;

public:
    MinHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }

        arr[size] = value;
        int idx = size;
        size++;

        while(idx > 0 && arr[(idx - 1)/2] > arr[idx]){
            swap(arr[(idx-1)/2], arr[idx]);
            idx = (idx-1)/2;
        }
        cout<<arr[idx]<<" is inserted to minHeap"<<endl;
    }

    void Heapify(int idx){
        int smallest = idx;
        int left = 2*idx + 1;
        int right = 2*idx + 2;

        if(left < size && arr[left] < arr[smallest]) smallest = left;
        if(right < size && arr[right] < arr[smallest]) smallest = right;

        if(smallest != idx){
            swap(arr[smallest], arr[idx]);
            Heapify(smallest);
        }
    }

    void Delete(){
        if(size <= 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" is deleted from minHeap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0) return;

        Heapify(0);
    }

    void printHeap(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MinHeap heap(6);

    heap.insert(10);
    heap.insert(5);
    heap.insert(20);
    heap.insert(2);

    heap.printHeap();

    heap.Delete();

    heap.printHeap();
}
*/




// MAX HEAP
/*
#include <iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }

        cout<<value<<" is inserted into the maxHeap"<<endl;
        arr[size] = value;
        int idx = size;
        size++;

        while(idx > 0 && arr[(idx-1)/2] < arr[idx]){
            swap(arr[(idx-1)/2], arr[idx]);
            idx = (idx-1)/2;
        }
    }

    void printHeap(){
        cout<<"Max Heap: ";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx + 1;
        int right = 2*idx + 2;

        if(left < size && arr[left] > arr[largest]) largest = left;
        if(right < size && arr[right] > arr[largest]) largest = right;

        if(largest != idx){
            swap(arr[largest], arr[idx]);
            int idx = largest;
            Heapify(idx);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" is deleted from the maxHeap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0 || size == 1) return;

        Heapify(0);
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.print();
    H1.insert(24);
    H1.insert(2);
    H1.insert(7);
    H1.print();
    H1.insert(6);
    H1.print();

    H1.Delete();
    H1.print();
}
*/




// MAX HEAP
/*
#include <iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }

        arr[size] = value;
        int idx = size;
        size++;

        while(idx > 0 && arr[(idx-1)/2] < arr[idx]){
            swap(arr[(idx-1)/2], arr[idx]);
            idx = (idx-1)/2;
        }
        cout<<arr[idx]<<" is inserted into the maxHeap"<<endl;
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx+1;
        int right = 2*idx+2;

        if(left < size && arr[left] > arr[largest]) largest = left;
        if(right < size && arr[right] > arr[largest]) largest = right;

        if(largest != idx){
            swap(arr[idx], arr[largest]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" is deleted from the heap"<<endl;
        arr[0] = arr[size]-1;
        size--;

        if(size <= 1) return;

        Heapify(0);
    }

    void printHeap(){
        cout<<"Max Heap: ";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.printHeap();
    H1.insert(24);
    H1.insert(2);
    H1.insert(7);
    H1.printHeap();
    H1.insert(6);
    H1.printHeap();

    H1.Delete();
    H1.printHeap();
}
*/




/*
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap{
    int* arr;
    int size;
    int total_size;

public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size >= total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }

        arr[size] = value;
        int idx = size;
        size++;

        while(idx > 0 && arr[(idx-1)/2] < arr[idx]){
            swap(arr[(idx-1)/2], arr[idx]);
            idx = (idx-1)/2;
        }

        cout<<arr[idx]<<" is inserted into the maxHeap"<<endl;
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx + 1;
        int right = 2*idx+2;

        if(left < size && arr[left] > arr[largest]) largest = left;
        if(right < size && arr[right] > arr[largest]) largest = right;

        if(largest != idx){
            swap(arr[largest], arr[idx]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size == 0){
            cout<<"Heap Underflow"<<endl;
            return;
        }

        cout<<arr[0]<<" is deleted from the heap"<<endl;
        arr[0] = arr[size];
        size--;

        if(size <= 1) return;

        Heapify(0);
    }

    void printHeap(){
        cout<<"Max Heap: ";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.printHeap();
    H1.insert(24);
    H1.insert(2);
    H1.insert(7);
    H1.printHeap();
    H1.insert(6);
    H1.printHeap();

    H1.Delete();
    H1.printHeap();
}
*/




// max Heap TC->O(n);
/*
#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int largest = idx;
    int left = 2*idx+1;
    int right = 2*idx+2;

    if(left < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;

    if(largest != idx){
        swap(nums[largest], nums[idx]);
        Heapify(nums, largest, n);
    }
}

void build_maxHeap(vector<int>& nums, int n){
    for(int i=(n/2)-1; i>=0; i--){
        Heapify(nums, i, n);
    }
}

void printHeap(vector<int>& nums, int n){
    cout<<"Max Heap: ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    build_maxHeap(nums, n);
    printHeap(nums, n);

    return 0;
}
*/




/*
#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int largest = idx;
    int left = 2*idx+1;
    int right = 2*idx+2;

    if(left < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;

    if(largest != idx){
        swap(nums[largest], nums[idx]);
        Heapify(nums, largest, n);
    }
}

void build_maxHeap(vector<int>& nums, int n){
    for(int i=(n/2)-1; i>=0; i--){
        Heapify(nums, i, n);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    build_maxHeap(nums, n);
}
*/




/*
#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& nums, int idx, int n){
    int largest = idx;
    int left = 2*idx+1;
    int right = 2*idx+2;

    if(left < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;

    if(largest != idx){
        swap(nums[largest], nums[idx]);
        Heapify(nums, idx, n);
    }
}

void build_maxHeap(vector<int>& nums, int n){
    for(int i=(n/2)-1; i>=0; i--){
        Heapify(nums, i, n);
    }
}

void heap_sort(vector<int>& nums, int n){
    for(int i=n-1; i>0; i--){
        swap(nums[i], nums[0]);
        Heapify(nums, 0, i);
    }
}

void printArray(vector<int>& nums, int n){
    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    build_maxHeap(nums, n);
    heap_sort(nums, n);
    cout<<"Heap sorted array: ";
    printArray(nums, n);

    return 0;
}
*/




