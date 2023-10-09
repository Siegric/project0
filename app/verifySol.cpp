#include <unordered_map>
#include <cmath>
#include <string>
#include "verifySol.hpp"

bool verifySolution(std::string s1, std::string s2, std::string s3, const std::unordered_map<char, unsigned> & mapping)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int a;


    a = s1.size();
    for (int i = 0; i < s1.size(); ++i) {
        --a;
        x += mapping.at(s1[i])*std::pow(10, a);
    }

    a = s2.size();
    for (int i = 0; i < s2.size(); ++i) {
        --a;
        y += mapping.at(s2[i])*std::pow(10, a);
    }

    a = s3.size();
    for (int i = 0; i < s3.size(); ++i) {
        --a;
        z += mapping.at(s3[i])*std::pow(10, a);
    }

    if (x + y == z) {
        return true;
    } else {
        return false;
    }
}

