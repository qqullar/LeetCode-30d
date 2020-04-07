#include <bits/stdc++.h>

// muchFaster than previous one, but still pretty slow

using namespace std;

string sortString(string str) 
{ 
   sort(str.begin(), str.end()); 
   
   return str;
} 
  

vector<vector<string>> groupAnagrams(vector<string>& strs) {
	unordered_map<string,vector<string>> table;
	
	for(string s : strs) {
		string sortedStr = sortString(s);
		auto srch = table.find(sortedStr);
		if(srch == table.end())
			table.insert({sortedStr, vector<string>{s}});
		else srch->second.push_back(s);
	}
	
	vector<vector<string>> groupedAnagramsV;
	for(auto it = table.begin(); it != table.end(); it++) {
		groupedAnagramsV.push_back(it->second);
	}
	
	return groupedAnagramsV;
}	




void testCase() {
	vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
		
	cout << endl;
	
	vector<vector<string>> vs = groupAnagrams(s);
	
	for(vector<string> v : vs) {
		std::cout << endl;
		for(string s : v)
			cout << s << " ";
	}
			
}



int main() {
	testCase();
	return 0;
}
