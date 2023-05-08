#pragma once
#include "SkipList.h"
#include <iostream>

class Menu {
    SkipList sl;
    void printOptions();
    void insertMultiple(int n);
    void deleteRange(int i, int j);
public:
    explicit Menu();
    void menuLoop();
};