/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/cppunittest.cc to edit this template
 */

/* 
 * File:   test_Event1.cpp
 * Author: aghanoum
 * 
 * Created on 14 December 2022, 12:04
 */
#include"analyze.h"
#include "test_Event1.h"

CPPUNIT_TEST_SUITE_REGISTRATION(test_Event1);

test_Event1::test_Event1() {
}

test_Event1::~test_Event1() {
}

void test_Event1::setUp() {
    this->example = new int(1);
}

void test_Event1::tearDown() {
    delete this->example;
}

void test_Event1::testMethod() {
    CPPUNIT_ASSERT(*example == 1);
}

void test_Event1::testFailedMethod() {
    CPPUNIT_ASSERT(++*example == 1);
}
