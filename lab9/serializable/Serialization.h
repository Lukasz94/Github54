//
// Created by pilanorb on 09.05.17.
//

#ifndef JIMP_EXERCISES_SERIELIZABLE_H
#define JIMP_EXERCISES_SERIELIZABLE_H
#include <vector>
#include <iostream>
#include <string>
#include <virtual>

namespace academia {
    class Serializable;

    class Serializer {

    public:

        virtual:void IntegerField(const std::string &field_name, int value) = 0;

        virtual:void DoubleField(const std::string &field_name, double value) = 0;

        virtual:void StringField(const std::string &field_name, const std::string &value) = 0;

        virtual:void BooleanField(const std::string &field_name, bool value) = 0;

        virtual:void SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;

        virtual:void ArrayField(const std::string &field_name,
                        const std::vector <std::reference_wrapper<const academia::Serializable>> &value) = 0;

        virtual:void Header(const std::string &object_name) = 0;

        virtual:void Footer(const std::string &object_name) = 0;

    protected:
        std::ostream &out;
    };

    class Serializable {

    public:
        void Serializer(Serializer *serializer);
    };
}
#endif //JIMP_EXERCISES_SERIELIZABLE_H
