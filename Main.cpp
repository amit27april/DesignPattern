#include <iostream>
#include "ASingleton.h"
//#include <mutex>

using namespace std;

int main()
{
	cout<<"value is "<< ASingleton::getInstance()->getValue() <<endl;
	ASingleton::getInstance()->setValue(10);
	cout << "value is " << ASingleton::getInstance()->getValue() << endl;
	cin.get();
	return 0;
}