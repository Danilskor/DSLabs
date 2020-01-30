#pragma once
#include <iostream>
#include "RedBlackTree.h"
#include "AVLtree.h"
#include <string>
using namespace std;

void PrintMainMenu();
void PrintAVLMenu();
void PrintRBTMenu();
void TreePrinting(RBTreeNode*, RBTree*);
void AVLTreePrinting(string, Node*, bool);
void AVLTreePrinting(Node*);
void TreePrinting(string, RBTreeNode*, RBTree*, bool);