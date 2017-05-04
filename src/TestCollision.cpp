#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE CollisionTest
#include <boost/test/included/unit_test.hpp>
#include <iostream>
#include <memory>
#include "AABBox.cc"
#include "AABBox.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(Collision)

//Test if the bounding box tests collision

BOOST_AUTO_TEST_CASE(Collision1)
{
    auto b1 = make_shared<AABBox>(AABBox(Vector3(0.0f, 0.0f, 0.0f), 5.0f, 5.0f, 5.0f));
    auto b2 = make_shared<AABBox>(AABBox(Vector3(2.5f, 2.5f, 2.5f), 5.0f, 5.0f, 5.0f));

    BOOST_CHECK( b1->CollidesWith(b2) );
    BOOST_CHECK( b2->CollidesWith(b1) );
}

//Test if the program can tell if an object is not colliding

BOOST_AUTO_TEST_CASE(Collision2)
{
    auto b1 = make_shared<AABBox>(AABBox(Vector3(0.0f, 0.0f, 0.0f), 5.0f, 5.0f, 5.0f));
    auto b2 = make_shared<AABBox>(AABBox(Vector3(20.5f, 20.5f, 20.5f), 5.0f, 5.0f, 5.0f));

    BOOST_CHECK( !b1->CollidesWith(b2) );
    BOOST_CHECK( !b2->CollidesWith(b1) );
}


BOOST_AUTO_TEST_SUITE_END()

