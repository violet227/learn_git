#include<iostream>
// deal with the exception of divide zero
using namespace std;
int divide(int x, int y) {
	if (y == 0){
		throw x;
	}
	return x / y;
}

int main()
{
	try{
		cout << " divide(1, 2):\t" << divide(1, 2) << endl;
		cout << " divide(2, 0):\t" << divide(2, 0) << endl;
		cout << " divide(4, 2):\t" << divide(4, 2) << endl;
	}catch (int e){
		cout << e << "  divide is zero" << endl;
	}
	cout << "That's OK!";
    return 0;
}