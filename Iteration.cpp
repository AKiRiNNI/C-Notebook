//Iterarion
// statements are used to repeatedly do something several times or until a specified condition is met
//whiile-statments
//do-while-statments
//for-statements

//While statement
//Repeatdlly executes a statment as long as a condition is true
//ex: x reduced to 1
int x = 19;
while(x != 1) {
    std::cout << x << std::endl;
    if (x % 2 == 1) {
        x = 3 * x + 1;
    } else {
        x = x / 2; 
    } //while will continue to be executed
}

//do-while-statement
//the condition for continuation is tested at the end
    //guarantees that the body of the loop is executed at least one time
int x = -1;
do {
    std::cout << "Enter a positive number: ";
    std::cin >> x; //cin: allow to take input from the key board, such as expecting user to type in a value 
} while (x <= 0); //the block will keep executing until x<=0 goes to false

//for-statement
//like while statement except that management of the control variable is at the top
    //makes it easy to see and understand
//header of for:
    //initialization of the control variable
    //continuation criterion (i.e.condition)
    //a stop operation
    //a step operation 

//example squares the number 1 through 10.

for (int i = 1; i <= 10; ++i) {
    std::cout << i << '\t' ,, pow(i,2) std::endl; //can do "++i;", but dont, may not be clear that it alwasy run
}
std::cout << i //can not do this because:
//variables declared in the initialization(control variable) are only visible within the loop's body
//continuation criterion(i.e. the condition) can be any expression readily convertible to bool
//the control variable can be modified in the loop's bodym but probabl;y wise to never do this
    //those reading a for-statement may reasonably assume the control variable is only incremented in the for-statement header
