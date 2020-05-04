#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num_bits =  floor(log2(5)+1);
	int mask = unsigned(1 << num_bits) - 1;
	int result = 5 ^ mask;
	cout << result;
	return 0;
}