
//Libraries to be used in the program
//Libraries contain packages of code that are to be reused in the program
#include <iostream>
#include <string>

//Certain libraries will only be availiable on certain operating systems
//The Windows.h library will only be availiable on the Windows OS, the library includes standard windows API
#include <Windows.h>


//Line of code tells compiler to use the std namespace
using namespace std;

class myClass_extension
{
public:
	int val_contained = 12;


};

class myClass : public myClass_extension
{
public:

	int val = 12;
	int x = val_contained;

	void function()
	{
		cout << val << endl;
	}

	int returnInt(int x)
	{
		return x;
	}


};


//Different types of functions
void func_one()
{
	bool play = true;
	//Returns nothing
	//Conditional statements
	if (play == true)
	{
		cout << "if statement" << endl;
	}

	int val = 0;
	while (play == true)
	{
		val++;
		if (val == 3)
		{
			cout << "while-loop" << endl;
			play = false;
		}
	}

	for (int i = 0; i < 3; i++)
	{    
		cout << "for-loop" << endl;
	}


}

bool func_boolean()
{

	return true;
}

int func_int()
{

	return 3;
}

string func_string()
{

	return "string";
}




int main()
{

    int defined_val = replace;

	//Types of variables
	int x, y, z;
	x = 12;
	y = 13;
	z = 3;
	z = x + y;

	double a, b, c;
	a = 3.14;
	b = 0.5;
	c = a * b;

	//Booleans are true and false statements
	bool play = false;
	play = true;

	char letter_one = 'a';
	char letter_two = 'b';
	char letter_three = 'c';

	string phrase = "Hello world";
	

	cout << "variable phrase is: " << phrase << endl;
	cout << "letter_one + letter_two + letter_three is: " << letter_one << letter_two << letter_three << endl;
	cout << "output of variable c is: " << c << endl;
	cout << "output of variable z is: " << z << endl;
	cout << 3.14 / 2 << endl;

	//By using the std namespace
	//The compiler would recognize the use of cout << "" << endl;
	//This eliminates the need to put std::cout << "" << std::endl;
	cout << "" << endl;
	cout << "cap" << endl;
	std::cout << "cap" << std::endl;
	cout << "" << endl;

	//Calling functions
	func_one();

	//Calling classes
	myClass key;
	key.function();
	cout << key.returnInt(key.x) << endl;

	cout << endl;

	//Pointers
	//Pointers point to an anddres
	int * pointer;
	int sum = 133;
	pointer = &sum;
	cout << pointer << endl;

	//To access value contained in pointer, the pointer needs to be defererenced
	cout << *pointer << endl;

	//Creating and using class pointers
	cout << endl;

	myClass * pointer_key = new myClass;
	pointer_key->function();
	



	//Returns the value of 0 to the calling process
	//This ends the main function which terminates the program
	//Windows API function
	Sleep(10000);
	return 0;
}


