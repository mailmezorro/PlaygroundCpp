#include "pch.h"
#include "../Boxit/boxit.hpp"
#include <iostream>

TEST(TestCaseName, TestCalculateVolume) {
	cout << "Test the function CalculateVolume" << endl;
	Box box(2, 3, 4);

	EXPECT_EQ(24, box.CalculateVolume()); 
	EXPECT_TRUE(true);
}
