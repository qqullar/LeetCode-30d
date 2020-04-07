#include <iostream>
#include <vector>
#include <unordered_set>

// too slow indeed :(

using namespace std;

    unordered_multiset<char> toMultiSetOfChars(const string &x) {
    unordered_multiset<char> setOfChars;

    for(char i : x) {
        setOfChars.insert(i);
    }

    return setOfChars;
}

bool isStrEquals(const string &x, const string &y) {
    return toMultiSetOfChars(x) == toMultiSetOfChars(y);
}
    
vector<vector<string>> groupAnagrams(vector<string>& strs) {

    vector<vector<string>> anagrams;
    anagrams.push_back(vector<string>{strs.front()});

    for(size_t j = 1; j < strs.size(); ++j) {
        bool flag = false;
        for(size_t i = 0; i < anagrams.size() && flag == false; ++i) {
            if(isStrEquals(anagrams[i].front(), strs[j])) {
                anagrams[i].push_back(strs[j]);
                flag = true;
            }
        }
        if(flag == false) anagrams.push_back(std::vector<string>{strs[j]});
    }

    return anagrams;
    }


void testCase() {
	string x = "";
	string y = "";
	
	cout << "Testing toMultiSetOfChars" << endl;
	cout << bool(toMultiSetOfChars(x) == toMultiSetOfChars(y)) << endl;
	
	cout << isStrEquals(x,y) << endl;
	
	cout << "\n\n\n";
	
	// Testing the solution function
	vector<string> test1= {"vlad" , "lavd", "vald", "sps", "pss", "hello" };
	
	vector<vector<string>> result = groupAnagrams(test1);
	
	for(vector<string> &t_ : result)
		for(string &t__ : t_)
			cout << t__ << endl;

}

int main() { 
	testCase();
	return 0;
	
}
	 
