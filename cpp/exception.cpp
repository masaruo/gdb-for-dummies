#include <iostream>
#include <stdexcept>

void exceptTwo(void)
{
	throw (std::runtime_error("exception!"));
}

void exceptionOne(void)
{
	try
	{
		exceptTwo();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		throw;
	}
	
}

int main(void)
{
	try
	{
		exceptionOne();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
