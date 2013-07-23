#include <ks3/sim/vec3.hpp>
#include <gtest/gtest.h>

using namespace ks3;
using namespace ks3::sim;

TEST(IndexBounds, Overflow)
{
    Vec3<s32> v;
    
    ASSERT_THROW(v[123], std::out_of_range);
    ASSERT_THROW(v[13], std::out_of_range);
    ASSERT_THROW(v[3], std::out_of_range);
}

TEST(IndexBounds, Underflow)
{
    Vec3<s32> v;
    
    ASSERT_THROW(v[-2], std::out_of_range);
    ASSERT_THROW(v[-123], std::out_of_range);
    ASSERT_THROW(v[-12], std::out_of_range);
}

TEST(Constructor, Default)
{
    Vec3<r32> v;
    
    EXPECT_EQ(0.0f, v[0]);
    EXPECT_EQ(0.0f, v[1]);
    EXPECT_EQ(0.0f, v[2]);
}

TEST(Constructor, Initialized)
{
    Vec3<r32> v(1.0f, 2.0f, 3.0f);
    
    EXPECT_EQ(1.0f, v[0]);
    EXPECT_EQ(2.0f, v[1]);
    EXPECT_EQ(3.0f, v[2]);
}