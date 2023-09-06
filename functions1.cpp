//writing functions well
//first line of organization of any program
//functions should be small, less than 40 lines, easier to read/test
    //blocks within if statements,m else statements, while statements, should be one line
    //Keeps the function small, while the function's descriptive name helps document what's  goingon
    //indentation level of a function should not be greater than one or two

//function should do one thing
    //the funtion should only perform steps that are one level below its stated name
    //function is doing more tha "onething" can extract another funtion from it with a name that is not a restatement of its implementation

//function should have one level of abstratcion

//higher the level of abstraction, the less detail; lower the level, more detail

//mixing different level of asbrtaction makes code difficult to read and confusing
    //therefore, make sure all statements within the funtion are at the same level of abstraction

//chapters->headings->subheadings: decrease in abstraction


//The Stepdown Rule
    //Write code that reads like a top-down narrative
    //Every function shoudl be followed by those at the next level of abstraction, don't mix varience of abstraction in a single function

//function should have descriptive names
    //long names are ok
    //describes what the function does
    //consistent name with phraseology, ensure function does what readers expected

//Function should have small number of arguments
    //ideal number of arguments for a function is zero(niladic), followed by one(monadic), closely by two(dyadic)
    //Three arguments (triadic) are to be avoided and more than three(poliadic) requires special justification

//more arg, more difficult it is to interpret what the function does
//more arg, more difficult it is to test
    //need to ensure different combination of arguments work satisfactorily

//Monadic funtions
    //two common reasons for a function to have a simgle parameter
        //ask a question about an object
            //is it valid? In an acceptatble range? current state?
        //Perform an operation on an object returning the object transformed into something else
    //Function name and argument should form a verb/noun pair

//Dyadic function
    // Sensible when the parameters have natural cohesion and/ or natural ordering
        //takes time to learn ordering convension otherwise, cognitive load increased
    //convert into nomads when possible
    //other wise, can use keyword form of funtion name to encode the names of parameter into function
    AssertEquals(expected, actual) -> AssertExpectedEqualsActual(expected, actual)

//Triads
    //Significantly more difficult to understand than dyadic functions
    //More practice required to learn their correct usage and cognitive load to understand
        //have you ever got the ordering of the argument wrong?
    //only use these after careful consideration
    Circle Makecircle(double x, double y, double radius);
    Circle makeCircle(Point center, double radius);

//Avoid flag parameters
    //Passing a Boolean into a function suggests that the function does more than one thing
        //  split function with flag parameters into two functions

//Function should have no sideeffects
    // dont include code that essencially chaneg object that pass into it

//Don't repeat yourself
    //  increase chnances of error to occur
    //eliminate code duplication by refactoring it into function