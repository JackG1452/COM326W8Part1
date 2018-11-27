#include "Person.h"



Person::Person()
{
}

Person::Person(std::string Name, std::string Email) :Name_{Name}, Email_{Email}
{
}

Person::Person(std::string Name):Name_{Name}
{
}


Person::~Person()
{
}

std::string Person::GetName() const
{
	return Name_;
}

void Person::SetName(std::string Name)
{
	Name_ = Name;
}

std::string Person::GetEmail() const
{
	return Email_;
}

void Person::SetEmail(std::string Email)
{
	Email_ = Email;
}

std::string Person::ToString() const
{
	return Name_ + " " + Email_;
}


