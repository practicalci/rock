/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#include <string>
#include "rock/core/A.h"

namespace rock {
namespace core {

// constructors
A::A() {
}

A::A(std::string name) : m_name(name) {
}

// copy constructor
A::A(const A& other) : m_name(other.m_name) {
}

// copy assignment operator
A& A::operator=(const A& other) {
    if(this != &other)
    {
        m_name = other.m_name;
    }

    return *this;
}

// destructor
A::~A() {
}

// getter
const std::string A::get_name() const
{
    return m_name;
}

// functions that use another class B
void A::passByValue(B b) {
}

void A::passByReference(const B& b) {
}

void A::passByPointer(B* b) {
}

B A::returnValue() {
    return B();
}

B& A::returnReference(B& b) {
    return b;
}

B* A::returnRawPointer() {
    B* raw_pointer_to_B = new B(); // allocate storage on the heap
    return raw_pointer_to_B;
}

std::shared_ptr<B> A::returnSharedPointer() {
    return std::make_shared<B>();
}

// non-member function to get the name of an A object
const std::string get_name_of_other(const A& other)
{
    return other.get_name();
}

} // namespace core
} // namespace rock
