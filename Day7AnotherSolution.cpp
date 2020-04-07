#include <iostream>
#include <vector>
#include <map> 

// not mine solution

using namespace std;


int countElements(vector<int>& arr) {
	map<int, int> maps;
	int ans = 0;
	for (auto t : arr) 
		maps[t]++;
	for (auto t : maps) {
		if (maps.find(t.first + 1) != maps.end()) {
			ans += t.second;
		}
			
	}
	return ans;
}

int main() {
	vector<int> v = { 1,3,2,3,5,0 };
	
	cout << countElements(v); 
	
	return 0;
}
