// Person.cpp

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor
Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Constructor with weight parameter
Person::Person(string mFirstName, float newWeight , int newAge)
{
    mWeight = newWeight;
    mFirstName = "";
    mAge = newAge;
}
Person::operator int()
{
return mAge;
}
// Destructor
Person::~Person()
{
    // Clean up any resources if needed
}

// Overload the add operator
float Person::operator+(const Person& otherPerson)
{
    // Add the weights of two persons
    return mWeight + otherPerson.mWeight;
}
