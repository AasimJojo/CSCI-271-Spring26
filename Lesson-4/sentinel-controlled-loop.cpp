/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Name: Aasim Joseph Jr
Course: CSCI 271
Lesson: Lesson 4 Iteration & Loop Patterns
Program: Sentinel-Controlled Class Average
Description: This program reads grades until the user enters -1, then calculates the average.
*/
#include <iostream>
#include <iomanip> // for setting decimal precision
using namespace std;


int main(){
    int total = 0;
    int gradeCounter = 0;
    int grade;
    
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
    
    // the loop repeats as long as the sentinel (-1) is Not Sentinel-Controlled
    while(grade != -1){
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
        
    }
    // use static_cast<double> to avoid integer division errors
    if(gradeCounter != 0){
        double average = static_cast<double>(total) / gradeCounter;
        cout << "\nTotal of all the grades is " << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average << endl;
        
    } else {
        cout << "No grades were entered." << endl;
    }
    return 0;
}

/*
Reflection:
1. What I understood from this program: I learned that a sentinel value acts as a signal to break the loop.
2. Difficulties I faced: I had to remember to read the first grade before the loop starts so the condition has something to check.
3. What I needed to search or review: How to use static_cast to get a decimal average.
4. AI Usage: Used AI to understand why the 'while' condition uses != and verified the math.
5. What I learned: I learned how to prevent division by zero if no grades are entered.
*/





