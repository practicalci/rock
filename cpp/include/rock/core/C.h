/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ROCK_C_H
#define ROCK_C_H

#include <string>
#include "rock/core/A.h"
#include "rock/core/B.h"

namespace rock {
namespace core {

    class C {
        bool m_booly;

    public:
        // constructors
        C();
        C(bool booly);

        // copy constructor
        C(const C& other);

        // copy assignment operator
        C& operator=(const C& other);

        // destructor
        ~C();

        // getter
        const bool get_booly() const;

        // overloaded functions
        std::string overloadMethod(A a);
        std::string overloadMethod(B b);
        std::string overloadMethod(A a, B b);
        std::string overloadMethod(A a, C c);
    };

} // namespace core
} // namespace rock

#endif // ROCK_C_H
