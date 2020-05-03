// Find out if we can constructs the string R using the M string
// Recursion can also solve this problem because we have to do the same works agains

#include<iostream>
#include<cstring>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        for (int i=0; i<magazine.size(); i++)
            m[magazine[i]]++;
        
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(m.find(ransomNote[i]) != m.end())
            {
                if(m[ransomNote[i]] == 0)
                    return false;
                m[ransomNote[i]]--;
            }
            else
                return false;
        }
        return true;
    }
};

int main() {
	string R = "aa";
	string M = "aab";
	
	if(canConstruct(R,M)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
 	return 0;
}