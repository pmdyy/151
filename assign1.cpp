/******************************************************************************
;@
;@ Student Name 1: student1
;@ Student 1 #: 123456781
;@ Student 1 userid (email): stu1 (stu1@sfu.ca)
;@
;@ Student Name 2: student2
;@ Student 2 #: 123456782
;@ Student 2 userid (email): stu2 (stu2@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: _everybody helped us/me with the assignment (list names or put
‘none’)__
;@
;@ Also, reference resources beyond the course textbook and the course pages on
Canvas
;@ that you used in making your submission.
;@
;@ Resources:  ___________
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A1_<userid1>_<userid2>" (eg. A1_stu1_stu2)
;@ * Form groups as described at:  https://courses.cs.sfu.ca/docs/students
;@ * Submit your file to courses.cs.sfu.ca
;@
;@ Name        : assign1.cpp
******************************************************************************/

#include <chrono>
#include <iostream>
// *** add more include files if you would like ***

using namespace std;
using namespace std::chrono;

int main() {

  cout << "Do not change this line.  Enter a sequence of increasing Fibonacci "
          "indicies and -1 to stop input."
       << endl;

  // Section 1
  // *** insert here a loop to input Fibonacci indexes and calculate Fibonacci
  // numbers, or input -1 to stop input ***
  int index;
  int fib1 = 0;
  int fib2 = 1;
  int fib3 = 0;
  int highestIndex = 0;
  int highestFib = 0;
  while (true) {
    cin >> index;
    if (index == -1) {
      break;
    }
    for (int i = 0; i < index; i++) {
      fib3 = fib1 + fib2;
      fib1 = fib2;
      fib2 = fib3;
    }
    if (index > highestIndex) {
      highestIndex = index;
      highestFib = fib3;
    }
  }

  // Section 2
  // use the next line as is to capture the start time of a 2 second period
  time_point<steady_clock> start = steady_clock::now();

  const int runLimit{2}; // generate Fibonacci numbers for 2 more seconds

  while ((steady_clock::now() - start) / 1s <
         runLimit) { // true if 2 seconds since start time have not yet elapsed
  }

  // *** output the highest Fibonacci index calculated ***
  cout << "Highest Fibonacci index calculated: " << highestIndex << endl;
  cout << "Highest Fibonacci number calculated: " << highestFib << endl;

  return 0;
}
