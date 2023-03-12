#include <iostream>
#include <string>
#include "Tnode.cpp"
using namespace std;
class Btree {
private:
    TnodePtr root;
    bool areMirrors(TnodePtr root1, TnodePtr root2);
public:
    Btree():root(0) {};
    bool isPalindromicTree(){
        return areMirrors(root->left, root->right);
    }
    void Buildtree(int buf[], int cnt);
    TnodePtr InsertTree(TnodePtr current, int data, int *flag);
    TnodePtr Delete_minusone(TnodePtr root);
    void Cleantree();
    TnodePtr Clean(TnodePtr current);
};

bool Btree::areMirrors(TnodePtr root1, TnodePtr root2)
{
    if(root1==NULL && root2==NULL)
        return 1;
    else if(!(root1->val == root2->val))
        return 0;
    return (areMirrors(root1->left, root2->right) && areMirrors(root1->right, root2->left));
}
void Btree::Buildtree(int buf[], int cnt)
{
    root = new Tnode(buf[0]);     //build root
    cout << "Root node val is: " << root->val << endl;
    for(int i=1; i<cnt; i++) {  //according input call InsertTree
        int flag = 0;
        root = InsertTree(root, buf[i], &flag);
    }
    root = Delete_minusone(root);
}
TnodePtr Btree::InsertTree(TnodePtr current, int data, int *flag)
{
    if(!current && *flag==0) {  //only insert a node
        TnodePtr newnode = new Tnode(data);
        if(newnode->val != -1)
            cout << "Creat a node val is: " << newnode->val << endl;
        *flag = 1;
        return newnode;
    }
    else if(!current && *flag==1)   //if have inserted,ignore
        return current;
    if(current->val == -1)
        return current;
    current->left = InsertTree(current->left, data, flag);
    current->right = InsertTree(current->right, data, flag);
    return current;
}
TnodePtr Btree::Delete_minusone(TnodePtr current)   //delete minusone node which InsertTree() created
{
    if(current->val == -1)
        return NULL;
    current->left = Delete_minusone(current->left);
    current->right = Delete_minusone(current->right);
    return current;
}
void Btree::Cleantree()
{
    Clean(root);
}
TnodePtr Btree::Clean(TnodePtr current)
{
    if(!current)
        return NULL;
    current->left = Clean(current->left);
    current->right = Clean(current->right);
    if(current->left==NULL && current->right==NULL){
        cout << "delete node val is: " << current->val << endl;
        delete current;
        return NULL;
    }
    return NULL;
}
