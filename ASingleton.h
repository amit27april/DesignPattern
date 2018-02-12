#pragma once
#include <mutex>

class ASingleton
{
	ASingleton();
	static ASingleton* pInstance;
	static std::mutex m_S;
	int iVal;
public:
	void setValue(int);
	int getValue();
	~ASingleton();
	static ASingleton* getInstance();
};

