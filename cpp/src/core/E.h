/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ROCK_E_H
#define ROCK_E_H

#include <string>

// This is a private class, it is not exposed to the public API of the project.

namespace rock {
namespace core {
namespace detail {

    class E {
        std::string m_name;

    public:
        // constructors
        E();
        E(std::string name);

        // getter, extended from base class
        const std::string get_name() const;

        const std::string get_class_name() const;
    };

} // namespace detail
} // namespace core
} // namespace rock

#endif // ROCK_E_H
