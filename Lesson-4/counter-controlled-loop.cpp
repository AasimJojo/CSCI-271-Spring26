/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Name: Aasim Joseph Jr
Course : Csci 271 
Lesson: Lesson 4 Iteration & Loop Patterns
Program: Counter Controlled Iteration
Description: This program uses a for loop to count to 1 to 5.
*/

#include <iostream>
using namespace std;

//The 'for' loop initializes i to 1, checks if i <= 5,
// and increments i by 1 each time.
int main(){
    for(int i = 1; i <= 5; i++) {
        cout << "Number : " << i << endl;
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program: I learned how a 'for' loop uses a counter to repeat a task a specific number of times. 
2. Difficulties I faced: Initially forgot to increment the counter, which could cause an infinite loop. 
3. What I needed to search or review: Lesson 4 slides on counter-controlled iteration. 
4. AI Usage: Used AI to clarify the 'for' loop syntax and verified output manually.
5. What I learned: I learned that the increment happens at the end of every loop
*/





