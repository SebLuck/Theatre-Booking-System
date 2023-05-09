#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "theatretest.h"

TEST_CASE("Test input of the user", "[User Input]")
{
  SECTION("Main menu input"){
      REQUIRE(menu("1") == "Valid input");
      REQUIRE(menu("2") == "Valid input");
      REQUIRE(menu("3") == "Valid input");
      REQUIRE(menu("4") == "Valid input");
      REQUIRE(menu("5") == "Valid input");
      REQUIRE(menu("0") == "Valid input");
      REQUIRE(menu("6") == "Invalid input");
      REQUIRE(menu("a") == "Invalid input");      
  }
  SECTION("Add booking menu"){
      REQUIRE(bookingMenu("1") == "Valid input");
      REQUIRE(bookingMenu("2") == "Valid input");
      REQUIRE(bookingMenu("3") == "Valid input");
      REQUIRE(bookingMenu("0") == "Valid input");
      REQUIRE(bookingMenu("4") == "Invalid input");
      REQUIRE(bookingMenu("b") == "Invalid input");
  }
  SECTION("Input the duration of an event"){
      REQUIRE(eventDuration("100") == "Valid input");
      REQUIRE(eventDuration("10") == "Valid input");      
      REQUIRE(eventDuration("1") == "Invalid input");
      REQUIRE(eventDuration("a") == "Invalid input");
      REQUIRE(eventDuration("-1") == "Invalid input");
      REQUIRE(eventDuration("2b") == "Invalid input");
      REQUIRE(eventDuration("abc") == "Invalid input");
  }
  SECTION("Input either 3D or 2D"){
      REQUIRE(filmDimension("3D") == "Valid input");    
      REQUIRE(filmDimension("2D") == "Valid input");
      REQUIRE(filmDimension("3d") == "Invalid input");
      REQUIRE(filmDimension("2d") == "Invalid input");
      REQUIRE(filmDimension("ab") == "Invalid input");
      REQUIRE(filmDimension("3") == "Invalid input");
  }
}
  
  



