//
// Created by sages on 10/10/2018.
//

#include "gtest/gtest.h"
#include "triangle.h"



TEST(test_angles_sides,Equilateral_triangle){
    triang::Triangle triangle{};
    ASSERT_EQ(" Equilateral triangle Obtuse triangle",triangle.return_type(60,60,60,10,10,10));
}

TEST(test_angles_sides,Scalene_triangle){
    triang::Triangle triangle{};
    ASSERT_EQ(" Acute Triangle Scalene triangle",triangle.return_type(24,75,81,11,10,12));
}

TEST(test_angles_sides,Acute_triangle){
    triang::Triangle triangle{};
    ASSERT_EQ(" Acute Triangle Scalene triangle",triangle.return_type(80,81,19,10,5,12));
}

TEST(test_angles_sides,Obtuse_triangle){
    triang::Triangle triangle{};
    ASSERT_EQ(" right triangle Scalene triangle",triangle.return_type(90,45,45,30,31,32));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


