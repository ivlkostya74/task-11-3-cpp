#pragma once
#include <iostream>


//#define LEAVERDYNAMIC_API 


class Leaver
{
private:
	const std::string Bay = "До свидания, ";
public:
	__declspec(dllimport) std::string leave(std::string);
};