#include <iostream>
#include <string>
#include "add.cpp"

using namespace std;

void print(string s); // Forward Declaring A function

int add(int a, int b);

//Value Returning Function
int baz() {
    return 10;
}

//Non-Value Returning Function
void foo() {
    baz();
    cout << "In foo()" << '\n'; 
}

//Function Inside a Function
void moo() {
    cout << "Start Of moo()" << '\n';   
    foo();                              //Invokes Function foo()
    cout << "End Of moo()" << '\n';
}

//Function With Parameters And Arguments'
void bar(int a, int b) {
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "a + b = " << a + b << '\n';
}

//Functions Can Have Unnamed Parameters
void hi(string ) { // Unnamed Paramters Can Not Be Used but Are There if You Want To
    cout << "Hello World" << '\n';
}

int Sum(int a , int b)  {           //Function With Same Idfentifier But
    return a + b;
}

int Sum(int a , int b, int c)  {    // Different Number Of Parameters Are Considered Different Function
    return a + b + c;
}

//Local Scope
void too(int num1 /* num1 is a local variable */) {
    int num2 = 10;                         //b is also a local variable
    cout << "num1 = " << num1 << '\n';
    cout << "num2 = " << num2 << '\n';
}

int main() {
    cout << Sum(10, 20) << '\n'; // Both Are Differnt Functions
    cout << Sum(10, 20, 30) << '\n'; 
    
    int age {};
    age = 10;                           //Reassigning Value to Funcition
    cout << age << endl;                
    hi("Hello");                        //Invokes The Function hi()
    cout << "Start Of main()" << '\n';
    moo();                              //Invokes The Function moo()
    cout << "End Of main()" << '\n';
    print("Hello World!");              //Invokes The Forward Declared Function print()
    cout << "Value Returned By baz() Is: " << baz() << '\n'; //Prints The Value Returned By The Function baz()
    bar(5, 10);                         //Invokes The Function bar()
    too(5);
    // We Either Compile Both Files Together Or We Can Also Use Preprocessor Directives
    cout << add(10, 20) << '\n';        //Invokes A Function From Another File
    return 0;
}

void print(string s) { // Forward Declared Function
    baz();                              //Invokes The Function baz()
    cout << s << '\n';
}