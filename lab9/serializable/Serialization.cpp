//
// Created by pilanorb on 09.05.17.
//

#include <vector>
#include "Serialization.h"

void Serializer::IntegerField(const std::string &field_name, int value) = 0;

void Serializer::DoubleField(const std::string &field_name, double value) = 0;

void Serializer::StringField(const std::string &field_name, const std::string &value) = 0;

void Serializer::BooleanField(const std::string &field_name, bool value) = 0;

void Serializer::SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;

void Serializer::ArrayField(const std::string &field_name,
                const vector<reference_wrapper<const academia::Serializable>> &value) = 0;

void Serializer::Header(const std::string &object_name) = 0;

void Serializer::Footer(const std::string &object_name) = 0;

