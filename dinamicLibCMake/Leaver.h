#pragma once
#include <iostream>


#define LEAVERDYNAMIC_API __declspec(dllimport)


class Leaver
{
private:
	const std::string Bay = "До свидания, ";
public:
	LEAVERDYNAMIC_API std::string leave(std::string);
};
