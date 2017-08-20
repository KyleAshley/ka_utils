// Assortment of Utility functions for useful C++ operations on STL datatypes

// -

#ifndef UTILS_H_
#define UTILS_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"


#include <string>
#include <cstring>
#include <iostream>
#include <ctype.h> 

using namespace std;



namespace kautils
{

	template<class ValueType> 
	void swap(ValueType& val1, ValueType& val2)
	{
		ValueType tmp = val1;
		val1 = val2;
		val2 = tmp;
		return;
	}

	// reverses the characters in a given string
	void reverseString(char* s);
	void reverseString(string s);

}

#endif