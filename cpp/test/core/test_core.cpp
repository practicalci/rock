#include "catch.hpp"

#include "rock/core/A.h"
#include "rock/core/B.h"
#include "rock/core/C.h"
#include "rock/core/D.h"

using namespace rock::core;

TEST_CASE( "Hierarchy test", "[hierarchy]" ) {
  A a("I am son of A.");
  A d = D("I am son of D.");
  B b(12);

  REQUIRE( a.get_name() == "I am son of A." );
  REQUIRE( d.get_name() == "derived" );
  REQUIRE( b.get_private() == 12 );
}

// Another test, with two tags.
TEST_CASE( "Some other test", "[types][performance]" ) {
  REQUIRE( 1 == 1 );
}
