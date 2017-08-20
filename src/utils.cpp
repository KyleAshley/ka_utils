#include "utils.h"


namespace kautils
{
	
	// reverses the characters in a c_str
	void reverseString(char* s)
	{
		unsigned int i = 0;
		i = strlen(s);
		for(unsigned int j=0; j<i/2; j++)
		{
			kautils::swap(s[j], s[i-j-1]);
		}
	}

	// reverses the characters in an std::string
	void reverseString(string& s)
	{
		unsigned int i = 0;
		i = strlen(s.c_str());
		for(unsigned int j=0; j<i/2; j++)
		{
			kautils::swap(s[j], s[i-j-1]);
		}
	}



}