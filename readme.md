C++ Notes:

Its an object oriented and procedural language mostly used in hardware,
gaming kind of applications etc.

Compiler g++ - used to compile your code.

.cpp or .h -- convert the mentioned source code into obj file filename.o
and creates an executable file.

Cout -- used to print statements and values into the output console --
standard output stream \<\< - this is known as insertion
operator.(output stream)

Cin -- used to get any inputs from the user in console window --
standard input stream \>\> - this is known as extraction operator.(input
stream)

std -- namespace which is to determine whether cout or cin belongs to
this particular namespace(package(iostream)).

:: scope resolution operator which is used to connect namespace with
appropriate methods.

Using namespace std::cout

Using namespace std::cin

The above are the global namespaces which will avoid code repetition
std::cout\<\<.... In the entire code structure.

**VARIABLE:**

Variable is an abstraction view of the memory location. In simple terms.

Variables is of type(integer, string, Boolean, etccc) and
values(1,'asdas',1.2,false,etcccc)

Variable names can contain numbers, letter, underscore.

But it can only begin with letters or underscore

**Primitive data types**

Character types(char)

Integer(int)

Floating points(float)

Boolean(bool)

  **Size(in bits)**   **Values**
  ------------------- -----------------------------
  8                   256(2^8^)
  16                  65536(2^16^)
  32                  4294967296(2^32^)
  64                  18446744073709551615(2^63^)

**Character types:**

Char - exactly one byte at least 8bits.

Char16_t -- at least 16 bits(2 byte)

Char32_t -- at least 32 bits(4 byte)

**Integer type:**

Signed short int -- at least 16bits(2 byte)

Signed int -- at least 16bits(2 byte)

Signed long int -- at least 32bits(4 byte)

Signed long long int -- at least 64bits(8byte)

Unsigned short int -- at least 16 bits(2 byte)

Unsigned int -- at least 16bits(2 byte)

Unsigned long int -- at least 32bits(4 byte)

Unsinged long long int -- at least 64bits(8 byte)

Signed -- can have both positive and negative numbers.

Unsigned -- can have only positive numbers and very large positive
numbers.

**Floating type:**

Represent non-integer numbers(real numbers(1.2,1.6424,0.123,etcc))

**Float --** 7 decimal digits.

**Double --** 15 decimal digits.

**Long double --** 19 decimal digits.

**Boolean type:**

True or false value(usually 8 bits(1 byte))

C++ represent 0 as false and any non-zero values as true

**Syntax**

Const type variable_name

**SizeOf:**

Determines the sizeof datatypes in bytes

**Constants:**

They are similar to variables, they are also data types, and it cannot
be changed once it is initialized.

**Types of constants declaration:**

-   literal constants.

-   Declared constants(const variable_name)

-   Constant expressions(constexpr variable_name)

-   Enumerated constants(enum variable_name)

-   Defined constants(\#define).

**Integer Literal constants:**

12 -- an integer

12U -- an unsigned integer.

12L -- a long integer.

12LL -- a long long integer.

**Float Literal constants:**

12.1 -- a double.

12.1F -- a float.

12.1L -- a long double

**Character literal constants: (mostly used in string literals)**

\\n -- new line

\\r -- return

\\t -- tab

\\b -- backspace

\\' -- single quote

\\\\ - backslash

\\" -- double quote.

**Compound Data types:**

Compound types is made of other types or data structure

**Array:**

Initialization: datatype variable_name\[\] {1,2,etc}

The name(variable_name) of the array represents the first address
location of the element. Bcoz of this only array index starts from 0.

For eg: int arr\[\] {1,2,3}

To access 0^th^ element u need to access via arr\[0\] which in turns
compiler transpiles \*(arr + 0) i.e

I^th^ distance from the array variable memory location.

That's y accessing array index value is of constant time.

**Vector:**

Vector is same as array except it will allocate dynamic memory at
runtime.

Vector is a class from which u can instantiate and use the methods and
properties in that,

**Assignment Operator:**

LHS = RHS assign the value in right hand side to the left hand side
variable.

For eg: int a {0} // This is initialization not an assignment

a = 10; // assign 10 to the rvalue in the lvalue of the variable a

variable a -- lvalue(memory location of the variable) rvalue(value of
the variable).

Operations should occur on same type of operand.

Eg: a+b =\> here a is operand + is operator.

Even if operands are different type c++ try to convert them into one of
them

We can manually convert this with the process of type coercion

There are two types higher type =\> basically data types that holds
maximum values eg: long , long long, long double.

Lower type =\> basically data types that holds less number of values
compared to higher type eg: short int, float, char, double

**Promotion:** converting from lower to higher type(usually used in
mathematical expressions)

**Demotion:** converting from higher to lower type(most used in
assignment )

EG: **int 2 \* 4.0** converts to =\> **2.0 \* 4.0** since it comes under
mathematical expression it converts lower type(which is int in this
example) to higher type(double).

**Int num {0}**; **num = 10.34** converts to =\> **10** since it comes
under assignment it converts higher type(double) to lower type(int)

3 main things defines the program control flow

**1**.**Sequence,**

**2.Selection(if, if-else, switch, ternary),**

**3.Iteration(for, while, do-while)**

**Characters:**

**1.Character functions**

**2.C-style strings**

**3.C++ style strings**

**String Literals: (C style)**

Eg: "My name is Manikandan"

String literals are stored in contagious allocation in memory, meaning
like an array of characters.

M Y n a m e I s M a n I k a n d a n \\0(null character to indicate that
the string ends)

Initialization EG:

char variable_name\[\] = {"Your string"} allocate no of characters of ur
string along with null character \\0

Types of C style functions

1.Copying

2\. Concatenation

3\. Comparision

4\. Searching etc..

**C++ Strings:**

Std strings is standard template library.

\#include \<string\> u need to include this preprocessor inorder to use
the methods in this pre processor.

C++ strings are also stored in contagious in memory.

C++ strings will allocate memory dynamically.

C++ strings provides a lot of member functions or methods.

**Function Prototypes:**

Function definition needs to be declared before it is being called in
c++,

This is ok for small progam but for large program this will be difficult
to arrange all those functions in order to maintain the compliation
error.

To resolve the above issue Function prototype has been introduced.

-   It is also called forward declarations.

-   Placed at the beginning of the program.

-   Also used in header files (.h).

EG: int fun_name(); //prototype

int fun_name(){ return 0; } //function definition or declaration.

**Function Parameters:\
**Function call it is called as arguments, where in function definition
it is called as parameters.

**Pass by value:**

Whenever we pass data in function call, we are actually passing the copy
of that value to that function, this means that inside the function
definition it cannot change that value since it's a copy not a reference
value.

**Formal vs actual parameters.**

**Formal:** parameters that is defined in the function definition.

**Actual:** parameters that is used when calling a function.i.e
arguments.

**Function Default Values:**

When function is called all arguments must be passed. Some times some of
the arguments can have the same value like pi for area or perimeter,
these values can be directly assigned to those parameters either in
function prototypes or function definition. Not in both.

EG: double cal_cost(double cost, double tax_amt = 0.06){ return cost +=
tax_amt }

Int main(){ cal_cost(100) // takes the default argument; cal_cost(100,
0.09); //overrides the default argument return 0;}

**OverLoading Functions:**

It is basically we can have functions with same name with different
parameter list.

Compiler are smart enough to call those functions depending on the type
and number of arguments that are passed during function call.

**Pass by Reference:**

By default C++ uses pass by value when we pass an argument in function
call to the function definition. But in some cases we may need to change
the actual value(argument) from the function body(definition), in this
case we will pass arguments instead of value the memory address, where
the formal parameters(parameters in function definition) becomes an
alias to actual parameters(arguments in function call).

For eg: array NOTE: you can pass any type of variable in this method.

**Scope Rules:**

-   It uses scope rules to determine when and where which identifiers to
    use.

-   It uses static or lexical scoping.

-   Local or block scope.

-   Global scope

**Local Scope:**

-   Identifiers declared inside a block {}.

-   Normally function parameters(formal parameters) are block scope or
    local scope.

-   Only visible within that block {}.

-   It can be active only when the function is called.

-   Local variables are not preserved, this means it will be destroyed
    once the function finishes the execution.

-   In nested blocks inner blocks has access to all the variables but
    outer blocks doesn't have the access to the inner block variables.

**Static local variable:**

-   Should be declared with static prefix keyword.

-   Value is preserved.

-   Only initialised when the first time the function is called.

**Global Scope:**

-   It is visble to the entire program.

**Function call:**

Similar to the javascript call stack method. .

**Pointers and References: (Most Important topic).**

You can directly modify or work with cpu's memory with the help of
pointers, like allocate or deallocate memory dynamically.

It is a variable whose value is the address of other variable or
function.

**Why to use pointers:**

One of the main use is to operate Array very efficiently.

Also we can allocate memory dynamically.

**Usage:**

Always initialize all pointer variables to nullpointer(which points to
nowhere). If u are not initializing it will point to some where in the
memory.

sizeOf pointer variable is same for all types 64bit(8) 32bit(4) size of
pointer variable is different from sizeof pointer variable that points
to.

Type_name \*variable_name;

EG: int \*variable_name(best practice); int\* variable_name;

**Dereferencing pointer:**

This is basically accessing the data that the pointer variable points
to.

**Dynamic Memory Allocation:**

It is used to create a new memory in the heap.

Syntax use new keyword to allocate a new memory in the heap.

Once u create a new memory using new keyword u need to free up the space
using delete keyword.

**NOTE:** if you forgot to freeup the space or if you lose the reference
to your pointer variable in the heap, this will cause the memory leak,
where this particular memory cannot be able to access until and unless
if u freeup.

**Arrays and pointers:**

Int scores\[\] {1,2}; scores is the array variable where the scores will
hold the first value's memory address, which is similar to int
\*score_ptr{scores}. i.e score_ptr === scores.

If you access \*score_ptr u will get the value of first array value.

That's y the array index starts from 0, i.e u can access the first
element by 0 means it is the first memory address. If u want to access
the subsequent memoiry address u need to add 1,2,3,..etc to the address
value. i.e \*(score_ptr + 0), \*(score_ptr + 1).

**Pointer Arithmetic:**

Pointer_variable supports increment, decrement, addition, subtraction,
comparision operators.

Pointer_variable + 1 or pointer variable ++ wil increment the size of
the type that the pointer variable points to. For EG: int num {10}; int
\*num_ptr; num_ptr + 1(increase the ptr variable by 4 since num_ptr type
is int).

pointer variable + n = n \* sizeof(type).

**Const & Pointer:**

There are three ways to declare const pointers in C++.

**Pointers to Constants:**

The data(value) pointed to by the pointer variable will be constant and
cannot be changed.

However the pointer variable address can be changed.

Int score {10}; int score1{20}; const int \*score_ptr{&score};
\*score_ptr = 21 //Error; score_ptr = score1 //true since we are
changing the pointer address.

**Constant Pointers:**

Opposite to pointers to contants. Syntax int \*const score_ptr{nullptr};

**Pointers to Constants.**

Applicable the above both rule. Syntax const int \*const
score_ptr{nullptr};

**Pointers to function(Pass by reference):**

Easy concept .

**Return a pointer from a function:**

A function that returns the pointer(address) itself syntax type
\*functionname(formalparameters).

**Potential Pitfalls in Pointers:**

Uninitialized pointers.

Dangling pointers.

**Uninitialized Pointers:**

Pointers that are not initialized may cause any damage or occupies
someother memory(system memory). Since uninitialized pointers will have
garbage memory address.

**Dangling Pointers:**

If two pointers points to the same memory address, and if one of the
pointers releases the memory, and the other still uses it, which cause
error for the another one while accessing or pointing any data to it.

**L-value & R-value:**

L-VALUE -- all the values that are not constants and addressable(can
change value) are l-values. EG: int score{10}; score = 121; score is an
l-value;

R-VALUE -- all the values to the right of the expression is r-value, i.e
all the literals etc

EG: int score{20}; 20 =\> rvalue, score = max(1,3) =\> max(1,3).

**When to use pointers & when to use references:**

**Pass by value:** when the function does not want to modify the actual
parameter(argument), and the parameters that are passed is small and
efficient to copy for eg: int, char etc.

**Pass by reference using a pointer:** when the function wants to modify
the actual parameter(argument). And if the parameters that are passed
are expensive o make a copy. And its ok to allow the pointer to have
nullptr value (most used in linked list and trees for the last list to
point it to null).

**Pass by reference using a reference:** Same as top except the
parameter reference can never be null.

**Object Oriented Programming:**

**Procedural program** is the prerequist for oop, procedural program is
a collection of functions. Easy to learn.

**OOP** consists of classes and objects, which mainly focuses on real
world abstraction, and basically is high level of abstraction.
**Encapsulation -** contain the data and the operations(functions),
**Information hiding --** the end users doesn't need to know the
implementation, the implementation login can be hidden inside the class
method, where as the class provides specific interface to use those
methods.

**Classes and objects:** Class -- blueprints for the objects, a user
defined data-type, it has attributes(properties), methods(functions),
can hide data and methods from objects.

Objects -- can be create from classes, a specific instance of a
particular class, can be created more than one instance of a class, each
has the access to the class functions.

**Syntax for creating class:**

class Class_name{

Methods//

Properties//

}

**Accessing class members:**

Two ways -- 1. Dot operator(.) 2. Arrow operator( -\>).

**Types of class access members:**

**Public:** Can be accessed everywhere.

**Private:** Accessible only by members or friends of any class. //By
default everything inside the class will be private.

**Protected:** used with inheritance.
