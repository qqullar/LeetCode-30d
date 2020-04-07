#include <iostream>
#include <string>
#include <set>


bool isHappy(int n) {
	using namespace std;
	
	string num  = to_string(n);
	
	set<int> s;
	while(1) {
		int newNum = 0;
		
		for(char c : num) {
			int newC = c - '0';
			newNum += newC*newC;
		 }

		 if(newNum == 1) return true;
		 if(s.find(newNum) != s.end()) return false;
		 s.insert(newNum);
		 num = to_string(newNum);
	}
}

int main() {
	int n = 19;
	std::cout << bool(isHappy(n)) << std::endl;
	return 0;
}

