#pragma once
#include <iostream>
#include <string>
class Person
{
private:
	std::string Name_;
	std::string Email_;

public:
	Person();
	Person(std::string Name, std::string Email);
	Person(std::string Name);
	~Person();

	std::string GetName() const;
	void SetName(std::string Name);

	std::string GetEmail() const;
	void SetEmail(std::string Email);

	virtual std::string ToString() const=0;
};

