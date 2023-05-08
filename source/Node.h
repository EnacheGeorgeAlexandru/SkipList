#pragma once
#include <vector>

struct Node {
    int value;
    std::vector<Node*> next;
    Node(int, int);
};