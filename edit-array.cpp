/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 2C



Purpose: Asks user for input index and input value, and changes the value
of the array at that index. If an out of bounds integer is inputted, the
program exits and prompts the user.

*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
  //declaration of array with 10 int-sized memory slots
  int myData[10];

  cout << endl; //space at beginning
  for (int i = 0; i < 10; i++){//sets all values to 1 and prints out array
    myData[i] = 1;
    //cout << myData[i] << " ";
  }

  //declaration of index and value vars
  int index = 0;
  int value;
  do {

    for (int i = 0; i < 10; i++){
      cout << myData[i] << " ";
    }

    cout << endl << endl;
    
    cout << "Input index: ";
    cin >> index;

    cout << "Input value: ";
    cin >> value;

    if (index >= 0 && index < 10){
      myData[index] = value;

      cout << " " << endl;
    }

    //cout << " " << endl;

  } while (index >= 0 && index < 10);
    cout << endl;
    cout << "Index out of range. Exit.";




  //end of main()
  return 0;
}
