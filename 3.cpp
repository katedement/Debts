#include <iostream>
#include <queue>  

using namespace std;

int main() {

	int a; int c = 0;
	std::queue <int> q1;
	std::queue <int> q2;

	for (int i = 0; i < 5; i++) {
		cin >> a;
		q1.push(a);
	}
	for (int i = 0; i < 5; i++) {
		cin >> a;
		q2.push(a);
	}

	while (q1.empty() == false || q2.empty() == false) {
		if (c == 10000000) {
			cout << "botva";
			break;
		}
		else {
			if (q1.empty() == true) {
				cout << "second " << c;
				break;
			}
			else if (q2.empty() == true) {
				cout << "first " << c;
				break;
			}
			else {
				if (q1.front() == 0 && q2.front() == 9) {
					q1.push(q1.front()); q1.push(q2.front());
					q1.pop(); q2.pop();
					c++;
				}
				else if (q1.front() == 9 && q2.front() ==0) {
					q2.push(q1.front()); q2.push(q2.front());
					q1.pop(); q2.pop();
					c++;
				}
				else if (q1.front() > q2.front()) {
					q1.push(q1.front()); q1.push(q2.front());
					q1.pop(); q2.pop();
					c++;
				}
				else {
					q2.push(q1.front()); q2.push(q2.front());
					q1.pop(); q2.pop();
					c++;
				}
			}
		}
	}

	return 0;
}