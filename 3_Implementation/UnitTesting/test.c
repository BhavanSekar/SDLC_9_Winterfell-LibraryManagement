#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unity.h>
#include <unity.c>
#include "var1.c"
void setUp()
{
    
}
void tearDown(void){

}
void test1(void){

    TEST_ASSERT_EQUAL_STRING(test_book, "Bhavan");
    TEST_ASSERT_EQUAL_STRING(test_author,"Bhavan");
    TEST_ASSERT_EQUAL(test_pages, 23);
    TEST_ASSERT_EQUAL(test_price, 24);
}
void test2(void){

    TEST_ASSERT_EQUAL_STRING(test_book1, "Rahul");
    TEST_ASSERT_EQUAL_STRING(test_author1,"Rahul");
    TEST_ASSERT_EQUAL(test_pages1, 22);
    TEST_ASSERT_EQUAL(test_price1, 23);
}
void test3(void){

    TEST_ASSERT_EQUAL_STRING(test_book2, "Madhu");
    TEST_ASSERT_EQUAL_STRING(test_author2,"Madhu");
    TEST_ASSERT_EQUAL(test_pages2, 21);
    TEST_ASSERT_EQUAL(test_price2, 22);
}

struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};

int main()
{
    
    UNITY_BEGIN();
    RUN_TEST(test1);
    RUN_TEST(test2);
    RUN_TEST(test3);
    return UNITY_END();
}
///