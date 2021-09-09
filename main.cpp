/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 2B



Purpose: Takes two integer inputs from user (L and U), prints out their range
with L being the inclusive lower limit and U being the exclusive upper limit.

*/
#include <iostream>
#include <string>
#include "funcs.h"

using namespace std;

int main(){
  int L = -5;
  int U = 10;

  print_interval(L, U);

  //end of main()
  return 0;
}
