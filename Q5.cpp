// 5. Write a recursive function int factorial(int n) that calculates the factorial of a
// given number n.
// In the main() function, prompt the user to enter a positive integer and call the
// factorial function to compute and display the result.
// Example: For input 5, the output should be 120.

#include <iostream>
using namespace std;
int factorial(int n){
int res=1;
for(int i = 1;i<=n;i++){
    res*=i;
}
return res;
}
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    cout<<"Factorial of "<<num<< " is "<<factorial(num)<<endl;
}