#include "gtest/gtest.h"
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

TEST(PersonTest, AgeTest) {
  Person p("Joe", 25);
  EXPECT_EQ(p.getAge(), 25);
}
