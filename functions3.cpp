//Function 2

//syntax of a function definition:
    //base typoe followedn by
    //an identifier
    //a lits of parameters, followed by
    //the body of the functions

int /*base*/ main /*identifier*/ () /*parameter goes here*/ {
    //body of function
}

//base type -> return type of funtion
    //we can "void" as pseudo return tyope, no value retunr

//parameter are comma seperated list
(double x, double y)
//if no parameter list(even if empty) makes a function to decleration

//Function will always have two parts
    //a funtion declaration (note the terminating semicolon)
    int Square(int x);
    //a function definition (note function body)
    int Square(int x) {
        return x * x;
    }

//Function declaration
//must introduce each name in our C++ program prior to uts use so that the compiler can ensure that we use it correctly
    //All of the information needed to call a function is in the first line of the definition
    int Square(int x) 
    //programmers don't typically check the functions implementation before we use it
    //instead, we are more interested in how to use the function
        //how we call the function
        //what does the function return
    //* implicit conversions

//instead writing the function declaration out each time (do not repeat yourself)

#ifndef MY_MATH_OPS_H
#define MY_MATH_OPS_H

int square(int x); 

#endif //# are header guards

my_math_ops.h //header file

//

#include <isotream>
#include "my_math_ops.h" //holds the content from header file

int main() {
    int no_to_square = 0;
    std::cin >> no_to_square;
    int squared_no = Square(no_to_square);
}

main.cc

//

//haven't define what sequence of statements are to be executed when this function is called
//function is defined in a source file (my_math_ops.cc) that conventionallyy corresponds to the header file (my_math_ops.h) through name

#include "my_math_ops.j"

int Square(int x) {
    return x * x;
}
my_math_ops.cc // contains definitions of different entities

//Header file
//contain all information we need to understand how to call a function
    //we don't need to know (nor do we often care) how a function is defined (as long as it works) 
    //just open the header file;seamless acces to this information
//contains all the info compiler needs to ensure we're using the name correcly
    //functions can be used as long s we decleared it

//Corresponding source file
//Keps the distracting function definitions out of our sight, since we aren't concerned with them
//enables seperate compilation (more on this later)

//Calling a function

#include "my_math_ops.h"

int main() {
    int square_11 = Square(11) //runs first, square's int x = 11
}
main.cc

//Writing functons in C++
//Style guid
    //function name should start with Capital line
    //Cap letter for each new words
    //40+ lines, break up the function

//Minimize use of vertical whitespace
    // dont use blank lines when don't have to
    //blank line within a block of code serves like a paragraph break in prose: it shoud be used to separate thoughs
    //non tricial function should have comments immediatly preceding.