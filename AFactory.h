#pragma once
#include <iostream>

class Car {
public:
	Car() {}
	virtual ~Car() {}
	virtual void show() = 0;
};

class NewCar : public Car {
	public:
		NewCar() { std::cout << "Initializing new car" << std::endl; }
		virtual ~NewCar() { std::cout << "destructing new car" << std::endl; }
		virtual void show()
		{
			std::cout << "I am a new car" << std::endl;
		}
};

class OldCar : public Car {
public:
	OldCar() { std::cout << "Initializing old car" << std::endl; }
	virtual ~OldCar() {
		std::cout << "destructing old car" << std::endl;
	}
	virtual void show()
	{
		std::cout << "I am a old car" << std::endl;
	}
};

class AFactory
{
	static Car *pCar;
public:
	AFactory();
	~AFactory();
	static Car* getCarInfo(int i);
};


