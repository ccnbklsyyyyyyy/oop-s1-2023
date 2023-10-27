#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>

namespace assists {
    std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight);
    double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2);
}

#endif
