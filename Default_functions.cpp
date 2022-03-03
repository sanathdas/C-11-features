/******************************************************************************
Default keyword
It's a new C++11 feature. It means that you want to use the compiler-generated version of that function, so you don't need to specify a body.
explicitly-defaulted function definition: as an explicit instruction to the compiler to generate special member function or a comparison operator (since C++20) for a class.
*******************************************************************************/

#include <iostream>

using namespace std;

class test 
{
    int var1;
    public:
    test() = default;//compiler will generate a default constructor
	
	test(const test &oj) =default; //works fine


    test(int a):var1(a)
    {
        cout << "parameterized constructor = " << var1 << endl; 
    }
	
	~test() =default; //compiler will generate a default destructor for us

    
    void Show()
    {
        cout << "obj value = " << var1 << endl; 
    }
    
};

int main()
{
    cout<<"Hello World\n";
    test obj;//default constructor will be called
    obj.Show();//junk value, var1 not initialized
    test a(6);

    return 0;
}
