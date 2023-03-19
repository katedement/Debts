#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::map<int, std::vector<std::string>> map;
    std::ifstream in;
    in.open("input.txt");

    int clas;
    std::string name; std::string line;
    while (!in.eof()) {
        std::stringstream ss(line);
        getline(in, line);
        ss >> clas >> name;
        map[clas].push_back(name);
    }

    std::map<int, std::vector<std::string>>::iterator it;
    for (int clas = 9; clas <= 11; ++clas) {
        auto it = map.find(clas);
        if (it != map.end()) {
            for (std::string& name : it -> second) {
                std::cout << it->first << " " << name << std::endl;
            }
        }
    }

    return 0;
}
