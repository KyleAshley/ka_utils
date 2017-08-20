#include "utils.h"


int main() {

	char s1[] = "hello";
	char s2[] = "kyle";

	kautils::reverseString(s1);
	cout << s1 << endl;

	kautils::reverseString(s2);
	cout << s2 << endl;
}