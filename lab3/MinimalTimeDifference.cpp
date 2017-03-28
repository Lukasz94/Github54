//
// Created by pilanorb on 14.03.17.
//

#include <string>
#include <vector>
#include <sstream>
#include <regex>
#include <cmath>
#include <MinimalTimeDifference.h>

using::std::regex;
using::std::smatch;
using::std::string;
using::std::stringstream;
using::std::vector;

regex pattern {R"(\d{1,2}):(\d{2})"};

unsigned int ToMinutes(std::string time_HH_MM);

int ToInt(string value){
    int int_value;
    stringstream ss;
    ss << value;
    ss >> int_value;
    return int_value;}



 unsigned int MinimalTimeDifference(std::vector<std::string> times){
    if (vector > 12*60){
            return (24*60 - vector);
        }
    }
