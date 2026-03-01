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
Program: Do-While Iteration Example
Description: This program demonstrates a loop that executes at least once before checking the condition.
*/

#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    
    do{
        cout << counter << " ";
        counter++;
    }while (counter <= 10); 
    
    cout << endl;
   
    return 0;
}

/*
Reflection:
1. What I understood from this program: I understood that do-while is a post-test loop.
2. Difficulties I faced: Forgetting the semicolon after the while condition.
3. What I needed to search or review: Lesson 4 slides regarding do-while syntax.
4. AI Usage: None.
5. What I learned: This loop is best when you need the code to run at least once regardless of the condition.
*/
