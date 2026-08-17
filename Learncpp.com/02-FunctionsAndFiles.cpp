#include <iostream>
#include <string>

using namespace std;

void print(string s); // Forward Declaring A function

//Value Returning Function
int baz() {
    return 5;
}

//Non-Value Returning Function
void foo() {
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

//Local Scope
void too(int num1 /* num1 is a local variable */) {
    int num2 = 10;                         //b is also a local variable
    cout << "num1 = " << num1 << '\n';
    cout << "num2 = " << num2 << '\n';
}

int main() {
    hi("Hello");                        //Invokes The Function hi()
    cout << "Start Of main()" << '\n';
    moo();                              //Invokes The Function moo()
    cout << "End Of main()" << '\n';
    print("Hello World!");              //Invokes The Forward Declared Function print()
    cout << "Value Returned By baz() Is: " << baz() << '\n'; //Prints The Value Returned By The Function baz()
    bar(5, 10);                         //Invokes The Function bar()
    too(5);
    return 0;
}

void print(string s) { // Forward Declared Function
    cout << s << '\n';
}