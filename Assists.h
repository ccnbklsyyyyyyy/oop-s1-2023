#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>
#include <random>

class Assists {
public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight);
    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2);
};

std::tuple<int, int> Assists::createRandomLoc(int matrixWidth, int matrixHeight) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> disX(0, matrixWidth - 1);
    std::uniform_int_distribution<int> disY(0, matrixHeight - 1);
    
    int x = disX(gen);
    int y = disY(gen);
    
    return std::make_tuple(x, y);
}

double Assists::evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
    int x1 = std::get<0>(loc1);
    int y1 = std::get<1>(loc1);
    int x2 = std::get<0>(loc2);
    int y2 = std::get<1>(loc2);
    
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    
    return distance;
}
#endif
