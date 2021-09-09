/*

Author: Eric Li

Course: CSCI-135

Instructor: Tong Yi

Assignment: Lab 2A



Purpose: Asks user for input, if input is (less than or equal to 0)
or (greater than or equal to 100), then prompt user again for a new integer.
If number satisfies the condition, then return the square of the number.

*/
#include <iostream>
#include <string>

using namespace std;

int main(){
  int num;

  cout << "Please enter an integer: ";
  cin >> num;

  while (num <= 0 || num >= 100){
    cout << "Please re-enter: ";
    cin >> num;
  }

  cout << '\n';
  int numSquared = num * num;
  cout << "Number squared is " << numSquared;
  //end of main()
  return 0;
}
