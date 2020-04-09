#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


string deleteBackspaces(string &str) {
	size_t lenStr = str.length();
	
	size_t i = 0, j = 0;
	
	while(i < lenStr) {
            if(str[i] == '#') {
		while(str[j] == '#' && j > 0) {
			--j;
			}
                str[j] = '#';
                if(j != 0) --j;
            } else j = i;
          
            ++i;      
        }
     
     string rightStr = "";
     
	for(char &x : str)
		if(x != '#') rightStr += x;
		
	return rightStr;
	}
		
	

bool backspaceCompare(string S, string T) {
        return deleteBackspaces(S) == deleteBackspaces(T);
        }


int main() {
	// ab#c -> ac
	// ad#c -> ac
	// ab## -> 
	// c#d# -> 
	// a##c -> c
	// #a#c -> c
	// a#c -> c
	// b -> b
	
	string x1 = "bxj##tw";
	string x2 = "bxo#j##tw";
	string x = "a##c";
	string y  = "#a#c";
	cout << deleteBackspaces(x) << " " << backspaceCompare(x1,x2) << endl;
	return 0;
}
