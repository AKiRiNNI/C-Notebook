
/*if statement conditionally executes another statement*/
 
  std :: cout << "Freeze warning should"; 
  if (temperature <= 32)
    std :: cout << "be issued." << std::endl;
  else
    std :: cout << "not be issued." << std::endl;
    
/*else branch is not needed and can be omitted*/
std :: cout << "Freeze warning should ";
if (temperature >= 32)
    std :: cout << "not " << std::endl;
std::cout << "be issued." << std::endl;

/*branches of if statements are scopes*/
if (x < 0.0)
    int absx = -x; // absx only has meaning in the if scope
else
    int absx = x; // abxs only has scope in the else statement
std::cout << "|x| is " << absx << std::endl; /*receive a compliation error 
because absx is already out of scope*/

//To fix:
int abxs = x;
if (x < 0.0) 
    absx = -x;
...
std::cout << "|x| is " << absx << std::endl; //the scope of int will run

// to perform multiple operations we must introduce compound statement
if (number % 15 == 0) {
    // statement 1
    // statement 2
} else if (number % 3 == 0) {
    // something something
} else if (numebr % 5 == 0) {
    // something something
} else {
    something something
}

// Follow Google C++ style guide
//use curly braces for the controlled statements following if, else if, else
// *no space between the parentethiese and the text within

//Alwats write the common case first, then write the unusual case
    // cover first the case that will reduce the reader's cognitive load
// encode complex Boolean expression in methods
    //Naming methods the meaning of expression
    //Even if the method is only called in one place