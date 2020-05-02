// Find out the no of stones in the J
// Output : 3

#include<iostream>
#include<cstring>
using namespace std;

int  numJewelInStone(string jewels, string stones) {
	int count = 0;
	for (int i = 0; jewels[i] != '\0'; ++i)
	{
		for (int j = 0; stones[j] != '\0'; ++j)
		{
			if(jewels[i] == stones[j]) {
				count += 1;
			}
		}
	}
	return count;
}


int main(int argc, char const *argv[])
{
	string J = "z";
	string S = "Z";
	cout << numJewelInStone(J, S);

	return 0;
}