/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ORG_ROCK_E_H
#define ORG_ROCK_E_H

#include <string>

// This is a private class, it is not exposed to the public API of the project.

namespace org {
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
} // namespace org

#endif // ORG_ROCK_E_H
