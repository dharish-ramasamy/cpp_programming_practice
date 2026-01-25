/* 
=> Function declaration:   

   return_type function_name (parameter_type parameter);

=> Function definition:    

   return_type function_name (parameter_type parameter)
   {
        statements;
        ..........;
        ..........;
        return value;
   }

=> Function call:
    
    int main()
    {
        ..........;
        function_name(arguement); //function call
        return 0;
    }

*/

#include <iostream>
using namespace std;

// function declarations
int addition(int x, int y); 

class Math
{

public:
    
    int subtraction(int c, int d) // function definition inside class(member function)
    {
        return d - c;
    }

    int multiply(int , int); // function declaration

    static int divide(int p, int q) // member function
    {
        return p / q;
    }
};

int main()
{
    int a = 3, b = 5, add, sub, mul, divi;

    // function calls

    add = addition(a,b);
    
    Math obj; //creating object
    
    // function call using object
    sub = obj.subtraction(a,b); 
    mul = obj.multiply(a,b);

    // static functions do not need an object
    divi = Math::divide(a,b); // called using class name
    
    cout << "Addition of " << a << " and " << b << " is " << add << endl;
    cout << "Subtraction of " << a << " and " << b << " is " << sub << endl;
    cout << "Product of " << a << " and " << b << " is " << mul << endl;
    cout << "Division of " << a << " and " << b << " is " << divi << endl;
    return 0;
}

// function definitions
int addition(int l, int m) 
{
    return l+m;
}

// function definition of member function declaration using class name
int Math::multiply(int n, int o)
{
    return n*o;
}
