#include <sstream>
#include <iostream>

using namespace std;

int main() {
	int age(42);
	string displayedAge;
	stringstream ss;
	ss << age;
	ss >> displayedAge;
}
