#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
//	char* test_v1[3]; test_v1[0] = "./c-echo"; test_v1[1] = "Andrew"; test_v1[2] = "Tee";
//        EXPECT_EQ("Andrew Tee", echo(3,test_v1));
//	char* test_v2[2]; test_v2[0] = "./c-echo"; test_v2[1] = "Linux";
//	EXPECT_EQ("Linux", echo(2,test_v2));
//	char* test_v3[5]; test_v3[0] = "./c-echo"; test_v3[1] = "Last\n"; test_v3[2] = "Test\n"; test_v3[3] = "Harness\n"; test_v3[4] = "!";
//	EXPECT_EQ("Last\n Test\n Harness\n !", echo(5,test_v3)); 

}

TEST(EchoTest, AndrewTee){
 char* test_v1[3]; test_v1[0] = "./c-echo"; test_v1[1] = "Andrew"; test_v1[2] = "Tee";
        EXPECT_EQ("Andrew Tee", echo(3,test_v1));

}

TEST(EchoTest, Linux){
 char* test_v2[2]; test_v2[0] = "./c-echo"; test_v2[1] = "Linux";
        EXPECT_EQ("Linux", echo(2,test_v2));
}

TEST(EchoTest, LastTestHarness){
 char* test_v3[5]; test_v3[0] = "./c-echo"; test_v3[1] = "Last\n"; test_v3[2] = "Test\n"; test_v3[3] = "Harness\n"; test_v3[4] = "!";
        EXPECT_EQ("Last\n Test\n Harness\n !", echo(5,test_v3));

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
