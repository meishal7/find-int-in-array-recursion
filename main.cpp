/* main.cpp 
 * This program looks for a number in a vector using recursion that returns true or false.
 * Author:     Elena Mudrakova
 * Module:     11
 * 
 *
 * Algorithm:
 * 1. Declare a function that returns boolean and accepts vector of integers, integer size of vector, integer number to look for.
 * 2. Declare bool found = false.
 * 3. if(size-1) < 0 || found == true -> return found.
 * 4. if last element in a vector == number you look for -> 
 * found == true, return found.
 * 5. Otherwise call the function is_member() recursively, 
 * but size == (size -1).
 * 6. Return found.
 */
#include <iostream>
#include <vector>
using namespace std;

// Prototypes
bool is_member(vector<int>&vec, int size, int n);

int main() {
  int size, target;
  vector<int>numbers;
  
  // User input
  cout << "How many numbers you would like to enter? ";
  cin >> size;
  
  // Initialize vector with user input
  for(int i = 0; i<size; i++){
    int digit;
    cout << "Enter a number: ";
    cin >> digit;
    numbers.push_back(digit);
  }
  
  for(int el : numbers){
    cout << el << " ";
  }

  // User input
  cout << "\nWhat number you want to look for? ";
  cin >> target;

  is_member(numbers, size, target);



  return 0;
}

// Find a number recursively
bool is_member(vector<int>&vec, int size, int n){
  bool found = false;
  if((size-1) < 0 || found == true){
    cout << (size -1) << "\n";
    return found;
  }
  else if(vec[size-1] == n){
    found = true;
    cout << n << " is present in a list." << "\n";
    return found;
  }
  else{
    return is_member(vec, size-1, n);
  }
  return found;
};