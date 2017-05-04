#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE CollisionTest
#include <boost/test/included/unit_test.hpp>

int subtract(int x, int y)
{
	return x-y;
}

BOOST_AUTO_TEST_CASE(subtractTest)
{
	BOOST_CHECK(subtract(5,5) == 0);
}

