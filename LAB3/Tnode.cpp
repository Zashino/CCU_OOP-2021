#include <iostream>
using namespace std;
class Tnode {
public: 
    int val;
    Tnode *left, *right; 
    Tnode(int a):val(a), left(NULL), right(NULL) {};
};
typedef Tnode* TnodePtr;

