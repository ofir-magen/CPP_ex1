

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n(\" \")"));
   CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n( ___ )"));
   CHECK(nospaces(snowman(11114414)) == nospaces("_===_\n(.,.)\n( : )\n(   )"));

   CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
   CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
   CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(..)\n( : )\n( : )"));
   
   CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11314411)) == nospaces("_===_\n(O,.)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11414411)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));
   
   CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11444411)) == nospaces("_===_\n(-,-)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11334411)) == nospaces("_===_\n(O,O)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11224411)) == nospaces("_===_\n(o,o)\n( : )\n( : )"));
   
   CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
   CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
   CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(> <)\n( : )"));
   CHECK(nospaces(snowman(11114441)) == nospaces("_===_\n(.,.)\n(   )\n( : )"));



}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    // for small input
    CHECK_THROWS(snowman(1));
    // for big num on the parameter (1-4)
        CHECK_THROWS(snowman(000));
    CHECK_THROWS(snowman(999));
    // big input
    CHECK_THROWS(snowman(673456789));
    // is OK just 1 error
    CHECK_THROWS(snowman(11111119));


    /* Add more checks here */
}


/* Add more test cases here */
