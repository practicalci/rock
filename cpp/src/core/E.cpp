/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#include "E.h"

namespace rock {
namespace core {
namespace detail {

// constructors
E::E() {
}

E::E(std::string name) : m_name(name) {
}


// getter
const std::string E::get_class_name() const
{
    return "class(E)";
}

const std::string E::get_name() const
{
    return m_name;
}

} // namespace detail
} // namespace core
} // namespace rock
