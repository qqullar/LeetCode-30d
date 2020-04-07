#include <iostream>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;

int countElements(vector<int>& arr) {
	sort(arr.begin(), arr.end());
	set<int> s;
	
	int nElements = 0;
	for(auto i = arr.rbegin(); i != arr.rend(); i++) {
		if(s.find(*i + 1) != s.end()) { ++nElements;}
		s.insert(*i);
	}
	
	return nElements;
}
  

void testCase() {
	vector<int> v = {1,1,2,2};
	cout << endl;
	std::cout << countElements(v);
}

int main() {
	testCase();
	
	return 0;
}
