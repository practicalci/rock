/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#include "rock/core/B.h"

namespace rock {
namespace core {

// constructors
B::B() {
}

B::B(int number) : m_private(number) {
}

// copy constructor
B::B(const B& other) : m_private(other.m_private) {
}

// copy assignment operator
B& B::operator=(const B& other) {
    if(this != &other)
    {
        m_private = other.m_private;
    }

    return *this;
}

// destructor
B::~B() {
}

// getter
const int B::get_private() const
{
    return m_private;
}

} // namespace core
} // namespace rock
