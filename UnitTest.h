#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }
};

#endif // UNIT_TEST_H
