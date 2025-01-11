#include <iostream>
#include <stdexcept>
#include <vector>

void exceptTwo(std::vector<std::string> const &arr)
{
	throw (std::runtime_error("exception!"));
}

void exceptionOne(void)
{
	try
	{
		std::vector<std::string> arr;
		arr.push_back("hello");
		arr.push_back("world");
		arr.push_back("42tokyo");
		exceptTwo(arr);
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
