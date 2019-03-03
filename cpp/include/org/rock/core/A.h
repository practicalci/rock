/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ORG_ROCK_A_H
#define ORG_ROCK_A_H

#include <memory>
#include <string>
#include "org/rock/core/B.h"

namespace org {
namespace rock {
namespace core {

    /**
    * @brief A class with private members and public functions.
    *
    * This class is written in C++11. Some of the functions of this class use
    * objects of type B.
    *
    * Optionally, Python bindings can be generated for this class, by using
    * tools like pybind11 or SWIG.
    *
    */
    class A {
        std::string m_name; /**< name of the object */

    public:
        A(); /**< default constructor with no arguments */
        A(std::string name); /**< constructor with name argument */

        A(const A& other); /**< copy constructor */

        A& operator=(const A& other); /**< copy assignment operator */

        virtual ~A(); /**< destructor */

        virtual const std::string get_name() const; /**< function to get the name of this object */

        void passByValue(B b); /**< function that passes an object by value */
        void passByReference(const B& b); /**< function that passes an object by reference-to-const */
        void passByPointer(B* b); /**< function that passes an object by pointer */
        B returnValue(); /**< function that returns an object */
        B& returnReference(B& b); /**< function that returns the reference to an object */
        B* returnRawPointer(); /**< function that returns a raw pointer to an object */
        std::shared_ptr<B> returnSharedPointer(); /**< function that returns a shared pointer to an object */
    };

    const std::string get_name_of_other(const A& other); /**< non-member function to get the name of an A object */

} // namespace core
} // namespace rock
} // namespace org

#endif // ORG_ROCK_A_H
