#include<iostream>
#include<string>
using namespace std;

class myException
{
public:
	myException(const string& message) :m_message(message)  {}
	myException() {}
	const string& getMessage() const {
		return m_message;
	}
private:
	string m_message;
};

class Demo
{
public:
	Demo() {
		cout << "Constructor of Demo" << endl;
	}
	~Demo(){
		cout << "Destructor of Demo" << endl;
	}

};

void func() throw (myException) {
	Demo d;
	cout << "Throw myException in func()" << endl;
	throw myException("exception thrown by func()");
}



int main()
{
	cout << "in main thread" << endl;
	try{
		func();
	}catch (myException& e){
		cout << "caught an exception: " << e.getMessage() << endl;
	}
	cout << "see you!";
    return 0;
}

