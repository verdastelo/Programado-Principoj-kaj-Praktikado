/*
  Add factorial operator to this program.
  Book: Programming Principles and Practice Using C++
  Author: Bjarne Stroustrup
  Student: Chetan Anand
  Date: 2016-11-21 (2016-11-23) 
  Solved on: 2016-11-24
*/

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// Понял.

class Token { // Error 1: "class" was written "lass."
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }    
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

// 

class Token_stream {
public: 
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// Понял
// Everytime Token_stream() is called, it sets the Boolean variable full to false
// and it assigns t.kind == NUL and t.value == 0 to buffer.

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream() 
:full(false), buffer(0)    // no Token in buffer
{ 
}

//------------------------------------------------------------------------------

// Понял
// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

// Find out how break and return are different.
// How does cin.putback() stop reading numbers.
//  

Token Token_stream::get()	// Error 2: get() couldn't access full. Made it a Token_stream() function.
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full=false;
        return buffer;
    } 

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case 'x':    // for "print"
    case '=':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': case '!': 
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': // Error 3: case '8': was missing.
        {    
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number and stop as soon as a non-numeric character comes your way. 
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double factorial (double n) {
  long int result = n;	// The function works on ints. Double values are converted.
  long int count = 1;        
  long int * ptrCount = &count;
  for (long int i = 1; i <= result; ++i) {
    *ptrCount *= i;
  }
  double f = count;    // f is a randomly chosen name. 
  return f;
} 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

double faktorial();     // declaration so that faktorial() can call primary
//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {    
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
     
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

double faktorial()      // Deals with !, a higher level operator than *, /, and % 
{
    double left = primary();
    Token t = ts.get();
    if (t.kind == '!') {
        left = factorial(left);  
        return left;
    }
    ts.putback(t);
    return left;
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
    double left = faktorial();
    Token t = ts.get();        // get the next token from token stream

    while(true) {
        switch (t.kind) {
        case '*':
            left *= faktorial();
            t = ts.get();
	    break; 		// Devious 2: There was no break.
        case '/':
            {    
                double d = faktorial();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = ts.get();
                break;
            }
        default: 
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term // Error 4 Term() was written Term( - the right parenthesis was missing.
    Token t = ts.get();        // get the next token from token stream

    while(true) {    
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract // Devious 1: left += term
            t = ts.get();
            break;
        default: 
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    cout << "This is a calculator." << endl;
    cout << "Print x to quit and = to see results." << endl;
    
    double val = 0;
    while (cin) {
        Token t = ts.get();
        if (t.kind == 'x') break; // 'x' for quit
        if (t.kind == '=')        // '=' for "print now"
            cout << "=" << val << '\n';
        else 
            ts.putback(t);

        val = expression();
    }
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
    return 2;
}

/*
   For 3!.
   1. ts.get() gets 3.
   2. The second if-loop stores t.get()'s value into buffer.
   3. 

*/

//-----------------------------------------------------------------------------

