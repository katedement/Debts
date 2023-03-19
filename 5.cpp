#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector <int> vec;
    std::string str;
    
    std::getline(std::cin>>std::ws, str);
    int end = -1;

    std::string::iterator i;
    for (auto i = str.begin(); i < str.end(); i++) {
      
        if (std::isdigit(*i)) {      //if only numbers
            vec.push_back(*i - '0');
            end++;
        }

        if (*i == '+') {
            int oper = vec[end - 1] + vec[end];
            vec.pop_back(); vec.pop_back();
            vec.push_back(oper);
            end--;
        }

        if (*i == '-') {
            int oper = vec[end - 1] - vec[end];
            vec.pop_back(); vec.pop_back();
            vec.push_back(oper);
            end--;
        }

        if (*i == '*') {
            int oper = vec[end - 1] * vec[end];
            vec.pop_back(); vec.pop_back();
            vec.push_back(oper);
            end--;
        }
    }
    std::cout << vec[0] << std::endl;

    return 0;
}