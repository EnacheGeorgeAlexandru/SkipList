#include "Node.h"

Node::Node(int val, int level) {
    value = val;
    next.resize(level + 1, nullptr);
}