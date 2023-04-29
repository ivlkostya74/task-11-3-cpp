#pragma once
#include <iostream>




class Leaver
{
private:
	const std::string Bay = "До свидания, ";
public:
	__declspec(dllimport) std::string leave(std::string);
};