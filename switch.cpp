//The switch statement
// allows selection based on comparison of a value against several constants
// each statament terminated by a break
// if the value (in op_code) doesen't matchg any of the case labels, the default label is chosen

switch (op_code) {
    //if op_code = int 0, case 0 gets run
    case 0: {
        z = x - y
        break;
    }
    //if op_code = int 1, BOTH case 1 and case 2 gets run because there's no break in case 1(falls through)
    case 1: // fall through
    case 2: {
        z = x + y;
        break
    }
    default: {
        assert(false);
    }
}

//Technicality of the switch statement
//must switch on a value of either integer, char, or enumeration type
//case label values must be known at complie time; one cannot use a variable in a case label
//ex cannot use case x;
//case must be unique in labels
//you can use several case labels for a signle case with fall through
//dont forget to end each case with break

//Google c++ style
//annotate non-trivial fall-through between case labels
//case blocks in switch statements can have curly braces or not, depending on your preference
//if no conditional on an enumerate value, switch statements should always have a default case
    //if the default case should never execute, treat its execution as an error