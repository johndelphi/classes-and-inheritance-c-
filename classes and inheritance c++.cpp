/*Name john michael

Course 1437 2803

Date 10/08/2020

Assignment Description 
/*Design a class named PersonData with the following member variables:

lastName

firstName

address

city

state

zip

phone

Write the  functions for these member variables.

Next, design a class named CustomerData, which is derived from the PersonData class. The CustomerData class should have the following member variables:

customerNumber

mailingList

The customerNumber variable will be used to hold a unique integer for each customer. The mailingList variable should be a bool.
It will be set to true if the customer wishes to be on a mailing list, or false if the customer does not wish to be on a mailing list.
Write appropriate accessor and mutator functions for these member variables. Demonstrate an object of the CustomerData class in a simple program.*/
#include <iostream>
#include <vector>
using namespace std;

class PersonData
{
public:
	void setFirstName();
	string getFirstName()const;// accesor
	void setLastName();
	string getLastName()const;
	string getCity()const;
	void setCity(string);
	void setZip();
	string getZip()const;
	void getPhone()const;
	vector<string>getAddress()const;
	vector<string>setAddress();
	string setPhone(string);



	PersonData();
	~PersonData();

private:
	string lastName;
	string firstName;
	vector<string> Address;
	string state;
	string city;
	string zip;
	string phone;
	

};

PersonData::PersonData() // constructor
{
}

PersonData::~PersonData()
{
}
// customer class defination on 64
class customer :public PersonData {
private:
	//string lastName;
	//string firstName;
	////string address[3];
	//string state;
	//string city;
	//string zip;
	//string phone;
public:
	
};


void PersonData::setFirstName()
{
cout << "please type in your first name below \n";
cin >>firstName;
}
string PersonData::getFirstName() const
{
	cout << firstName;
	return firstName;
}

void PersonData::setLastName()
{
	cout << "please type in your last Name:<<""<<\n";
	cin >>  lastName;
}

string PersonData::getLastName() const
{
	return lastName;
}

int main()
{
	customer john;
	john.setFirstName(),john.getFirstName();
	
	return 0;
}