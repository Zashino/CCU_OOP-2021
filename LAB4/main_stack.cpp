#include <iostream>
#include <string>
#include "Stack.cpp"
using namespace std;

int main()
{
    Stack d;
    cout << "Please enter number:" << endl; //print description
    cout << "1 -> push" << endl;
    cout << "2 -> pop" << endl;
    cout << "3 -> empty" << endl;
    cout << "-1 -> stop" << endl;

    while(1) {
        string task;
        cin >> task;

        int num = 0;
        switch(stoi(task)) { //according num to implement
            case 1:
                cout << "Enter number want to push:" << endl;
                cin >> num;
                d.push(num);
                break;
            case 2:
                cout << d.pop() << endl;
                break;
            case 3:
                d.empty();
                break;
            case -1:
                d.clear();
                return 0;
            default :
                continue;
        }
    }
}
