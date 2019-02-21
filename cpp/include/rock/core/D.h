/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ROCK_D_H
#define ROCK_D_H

#include "rock/core/A.h"

namespace rock {
namespace core {

    class D : public A {
        std::string m_name;

    public:
        // constructors
        D();
        D(std::string name);

        // getter, extended from base class
        const std::string get_name() const;

        bool is_derived();

        const std::string get_class_name() const;

        const std::string process_private_class() const;
    };

} // namespace core
} // namespace rock

#endif // ROCK_D_H
