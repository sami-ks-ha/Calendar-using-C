#include <unity.h>
#include "Calendar.h"
#define PROJECT_NAME    "Calendar"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void Test_daynumber(){
    TEST_ASSERT_EQUAL(5,daynum(1,1,2021));
    TEST_ASSERT_EQUAL(6, daynum(2,1,2021));
    TEST_ASSERT_EQUAL(0, daynum(3,1,2021));
    TEST_ASSERT_EQUAL(1, daynum(4,1,2021));
    TEST_ASSERT_EQUAL(2, daynum(5,1,2021));
    TEST_ASSERT_EQUAL(3, daynum(6,1,2021));
    TEST_ASSERT_EQUAL(4, daynum(7,1,2021));
}
void Test_getMonthName(){
 TEST_ASSERT_EQUAL_CHAR_ARRAY("January",getmonthname(0),7);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("February",getmonthname(1),8);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("March",getmonthname(2),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("April",getmonthname(3),5);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("May",getmonthname(4),3);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("June",getmonthname(5),4);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("July",getmonthname(6),4);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("August",getmonthname(7),6);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("September",getmonthname(8),9);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("October",getmonthname(9),7);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("November",getmonthname(10),8);
 TEST_ASSERT_EQUAL_CHAR_ARRAY("December",getmonthname(11),8);

}
void Test_numberOfDays(){
    TEST_ASSERT_EQUAL(31,numofdays(0,2021));
    TEST_ASSERT_EQUAL(28,numofdays(1,2021));
    TEST_ASSERT_EQUAL(31,numofdays(2,2021));
    TEST_ASSERT_EQUAL(30,numofdays(3,2021));
    TEST_ASSERT_EQUAL(31,numofdays(4,2021));
    TEST_ASSERT_EQUAL(30,numofdays(5,2021));
    TEST_ASSERT_EQUAL(31,numofdays(6,2021));
    TEST_ASSERT_EQUAL(31,numofdays(7,2021));
    TEST_ASSERT_EQUAL(30,numofdays(8,2021));
    TEST_ASSERT_EQUAL(31,numofdays(9,2021));
    TEST_ASSERT_EQUAL(30,numofdays(10,2021));
    TEST_ASSERT_EQUAL(31,numofdays(11,2021));

}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(Test_daynumber);
  RUN_TEST(Test_getMonthName);
  RUN_TEST(Test_numberOfDays);


  /* Close the Unity Test Framework */
  return UNITY_END();
}