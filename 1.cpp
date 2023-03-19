#include <iostream>
#include <vector> 
#include <set> 

using namespace std;

int main() {

	int n,a;
	cin >> n;
	std::set <int> set;

	for (int i = 0; i < n; i++) {  
		cin >> a;
		set.insert(a);
	}

	std::cout << set.size();
	return 0;
}