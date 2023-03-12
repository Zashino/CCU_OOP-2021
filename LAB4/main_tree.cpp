#include <iostream>  
#include <fstream> 
#include <cstring>
#include <string>
#include "Btree.cpp"
using namespace std;

int getdata(string line, int buf[], int n)
{
    char c_line[1024];
    strcpy(c_line, line.c_str());   //turn to char

    char *token;
    token = strtok(c_line, " ");    //gettoken
    while(token != NULL){
        buf[n++] = atoi(token);
        token = strtok(NULL, " ");
    }
    return n;   //return the amount
}

int main()
{
    ifstream inp("treeNode.txt",ios::in);

    Btree tree;
    string line;
    while(getline(inp, line)) {
        int buf[1024], cnt = 0, ans=0;
        cout << "-----------New tree--------" << endl;
        cnt = getdata(line, buf, cnt);
        tree.Buildtree(buf, cnt);
        cout << endl;

        ans = tree.isPalindromicTree();
        
        tree.Cleantree();
        if(ans == 1)
            cout << "Yes is a palindromic tree" << endl;
        else
            cout << "No is not a palindromic tree" << endl;
        cout << "--------------------------" << endl;
        cout << endl;
    }
}
