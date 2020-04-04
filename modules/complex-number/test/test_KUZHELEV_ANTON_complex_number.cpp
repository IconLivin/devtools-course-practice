// Copyright 2020 Kuzhelev Anton

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Create_Complex_Number) {
    double re = 10.0;
    double im = 10.0;

    ComplexNumber z(re, im);

    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Create_Deafult_Complex_Number) {
    ComplexNumber z;
    EXPECT_EQ(0, z.getRe());
    EXPECT_EQ(0, z.getIm());
}

TEST(Kuzhelev_Anton_ComplexNumberTest,
Can_Create_Complex_Number_From_Another_Complex_Number) {
    double re = 12.0;
    double im = 12.0;

    ComplexNumber z1(re, im);

    ComplexNumber z2(z1);

    EXPECT_EQ(z1, z2);
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Assign_Complex_Numbers) {
    double re = 13.0;
    double im = 13.0;

    ComplexNumber z1(re, im);

    re = 14.0;
    im = 14.0;

    ComplexNumber z2(re, im);

    EXPECT_NE(z1, z2);

    z1 = z2;

    EXPECT_EQ(z1, z2);
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Add_Complex_Numbers) {
    double re = 15.0;
    double im = 15.0;

    ComplexNumber z1(re, im);

    re = 16.0;
    im = 16.0;

    ComplexNumber z2(re, im);

    EXPECT_EQ(z1.getRe() + z2.getRe(), (z1 + z2).getRe());
    EXPECT_EQ(z1.getIm() + z2.getIm(), (z1 + z2).getIm());
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Substruct_Complex_Numbers) {
    double re = 15.0;
    double im = 15.0;

    ComplexNumber z1(re, im);

    re = 16.0;
    im = 16.0;

    ComplexNumber z2(re, im);

    EXPECT_EQ(z1.getRe() - z2.getRe(), (z1 - z2).getRe());
    EXPECT_EQ(z1.getIm() - z2.getIm(), (z1 - z2).getIm());
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Multiply_Complex_Numbers) {
    double re = 15.0;
    double im = 15.0;

    ComplexNumber z1(re, im);

    re = 16.0;
    im = 16.0;

    ComplexNumber z2(re, im);

    EXPECT_EQ(z1.getRe() * z2.getRe() - z1.getIm() * z2.getIm(),
    (z1 * z2).getRe());
    EXPECT_EQ(z1.getRe() * z2.getRe() + z1.getIm() * z2.getIm(),
    (z1 * z2).getIm());
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Compare_Equal_Complex_Numbers) {
    double re = 20.0;
    double im = 20.0;

    ComplexNumber z1(re, im);

    ComplexNumber z2(re, im);

    EXPECT_TRUE(z1 == z2);
}

TEST(Kuzhelev_Anton_ComplexNumberTest, Can_Compare_Not_Equal_Complex_Numbers) {
    double re = 20.0;
    double im = 20.0;

    ComplexNumber z1(re, im);

    ComplexNumber z2(re + 1, im + 1);

    EXPECT_TRUE(z1 != z2);
}
