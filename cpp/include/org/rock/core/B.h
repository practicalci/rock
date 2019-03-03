/*
 * Copyright (C) 2019 Eyeware Tech SA
 *
 */

#ifndef ORG_ROCK_B_H
#define ORG_ROCK_B_H

namespace org {
namespace rock {
namespace core {

    class B {
          int m_private;

      public:
          // constructors
          B();
          B(int number);

          // copy constructor
          B(const B& other);

          // copy assignment operator
          B& operator=(const B& other);

          // destructor
          ~B();

          // getter
          const int get_private() const;

          // public data member
          int m_public;
    };

} // namespace core
} // namespace rock
} // namespace org

#endif // ORG_ROCK_B_H

