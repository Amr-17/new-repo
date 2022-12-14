/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/cppunittest.h to edit this template
 */

/* 
 * File:   test_Event1.h
 * Author: aghanoum
 *
 * Created on 14 December 2022, 12:04
 */

#ifndef TEST_EVENT1_H
#define TEST_EVENT1_H

#include <cppunit/extensions/HelperMacros.h>

class test_Event1 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(test_Event1);
    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);
    CPPUNIT_TEST_SUITE_END();

public:
    test_Event1();
    virtual ~test_Event1();
    void setUp();
    void tearDown();

private:
    int *example;
    void testMethod();
    void testFailedMethod();
};

#endif /* TEST_EVENT1_H */

