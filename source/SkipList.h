#pragma once
#include "Node.h"
#include <iostream>
#include <random>
#define MAX_LEVEL 16

class SkipList {
    int level;
    double probability;
    Node* head;
    int generateRandomLevel();
public:
    explicit SkipList(double, int);
    void insert(int value);
    bool search(int value);
    bool erase(int value);
    void print();
};