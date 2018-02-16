#include "AFactory.h"



AFactory::AFactory()
{
	std::cout << "Inside AFactory cstor" << std::endl;
}


AFactory::~AFactory()
{
	if (pCar)
	{
		delete pCar;
		std::cout << "Inside AFactory D'ctor" << std::endl;
	}
}

Car* AFactory::pCar = nullptr;
Car* AFactory::getCarInfo(int i) {
	if (i == 1)
	{
		pCar = new NewCar;
	}
	else
	{
		pCar = new OldCar;
	}
	return pCar;
}
