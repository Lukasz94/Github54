//
// Created by pilanorb on 09.05.17.
//

#include <vector>
#include <iostream>

#ifndef JIMP_EXERCISES_SERIELIZABLE_H
#define JIMP_EXERCISES_SERIELIZABLE_H

class academia {
    class Serializable{
        void Serializer(){};
    };
};

class Serializer {

public:

    void IntegerField(const std::string &field_name, int value) = 0;

    void DoubleField(const std::string &field_name, double value) = 0;

    void StringField(const std::string &field_name, const std::string &value) = 0;

    void BooleanField(const std::string &field_name, bool value) = 0;

    void SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;

    void ArrayField(const std::string &field_name,
                    const vector<reference_wrapper<const academia::Serializable>> &value) = 0;

    void Header(const std::string &object_name) = 0;

    void Footer(const std::string &object_name) = 0;

protected:
    std::ostream &out;
};

class Serializable {

public:
    void Serializer (Serializer * serializer);
};

#endif //JIMP_EXERCISES_SERIELIZABLE_H
