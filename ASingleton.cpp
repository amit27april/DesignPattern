#include <iostream>
#include "ASingleton.h"
using namespace std;

ASingleton::ASingleton():iVal(0)
{
	cout << "Inside constructor" << endl;
}


ASingleton::~ASingleton()
{
	cout << "Inside destructor" << endl;
	if (pInstance)
		delete pInstance;
}

ASingleton* ASingleton::pInstance = NULL;
mutex ASingleton::m_S;

ASingleton* ASingleton::getInstance()
{
	if (!pInstance)
	{
		lock_guard<mutex> lock(m_S);
		try {
			if(!pInstance)
				pInstance = new ASingleton();
		}
		catch (bad_alloc xa) {
			cout << "Allocation failed" << endl;
			exit(0);
		}
	}
		
	return pInstance;
}

void ASingleton::setValue(int x)
{
	iVal = x;
}

int ASingleton::getValue()
{
	return iVal;
}