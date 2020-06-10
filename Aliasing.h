#pragma once
// ^ Look it's #pragma once
// v The typical inclusion guard
/*
#ifndef ALIASING_H
#define ALIASING_H
*/
#include<vector>
#include<string>
#include<iostream>

// Aliasing a different data type in this case MyChar is a data type that is 
// equivalent to char
using MyChar = char;

// It can now be used in functions as arguments 
MyChar aliasing1(MyChar data) {
	return data;
}

// It can also be used as a data type for templates
std::vector<MyChar>* aliasing2(MyChar data) {
	std::vector<MyChar>* returnData = new std::vector<MyChar>;
	returnData->push_back(data);
	return returnData;
}
// So it really acts like a new data type.
// What about casting though?
char aliasing3(MyChar data) {
	return data;
}

// A super simple wrapper class to give a basic example of what class syntax 
// looks like. Also, uses the created alias
class AliasingClass {
private:
	// Private members cannot be access externally
	MyChar data;
public:
	// The entire public interface, including a constructor, a mutator, and an
	// accessor
	AliasingClass(MyChar newData) : data(newData) {}
	void setData(MyChar newData) { data = newData; }
	MyChar getData() { return data; }
};

// Struct example:
struct Student {
	int studentID;
	std::string firstName;
	std::string lastName;
	double GPA;
};

// Note: using pass by reference to avoid copying
void printStudent(Student& stu) {
	std::cout << "My name is " << stu.firstName << " " << stu.lastName << "." << std::endl;
	std::cout << "My Student ID is " << stu.studentID << "." << std::endl;
	std::cout << "My GPA is " << stu.GPA << "." << std::endl;
}

// Enumeration example:

// Union example:

void test_aliasing() {

}
/*
#endif
*/