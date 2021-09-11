/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 2D



Purpose: Prints out a fibonacci sequence

*/

#include <iostream>

using namespace std;

int main(){
  //declaration of array
  int fib[60];

  //initialization of first 2 indices
  fib[0] = 0;
  fib[1] = 1;
  cout << fib[0] << endl << fib[1] << endl;
  for(int i = 2; i < 60; i++){
    fib[i] = fib[i-1] + fib [i-2];
    cout << fib[i] << endl;
  }

/**********************************************************************
                            EXPLANATION
***********************************************************************/
  /*
    Isolated addition of fib[47] = fib[46] + fib[45]
    int sum = 1836311903 + 1134903170;
    cout << sum;
  */

  /*
  At index 47 of the fibonacci sequence,
  an integer addition overflow occured,
  that is where the resulting value of the calculation
  does not fit in the memory allocated space for the integer.
  The resulting sum of the arithmetic operation, when converted to binary
  is too big to be stored within the integer's allowed bit size.
  */

  return 0;
}
