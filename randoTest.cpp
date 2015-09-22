/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, posAIsNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(1, 2), 1 );
}

TEST(RandoTest, negAIsNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(-1, 2), -1 );
}

TEST(RandoTest, posBIsNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(2, 1), 1 );
}

TEST(RandoTest, negBIsNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(2, -1), -1 );
}

TEST(RandoTest, aAndBNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(1, 1), 1 );
}

TEST(RandoTest, errorNearestToZero)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(0, 1), 0 );
}
