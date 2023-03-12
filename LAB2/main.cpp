#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>
#include <string>
#include <cmath>
#define input_x 3.0
#define MAX_POWER 100
using namespace std;

int heighestPower(float coff[])
{
    int h_pow = 0;
    for (int i=0; i<100; i++) {
        if(coff[i] != 0)
            h_pow = i;
    }
    return h_pow;
}

void display(int heighestPow, float coff[])
{
    cout << "f(x)= ";
    if (heighestPow == 0){
        cout << 0 << endl;
        return;
    }
    for (int i=0; i<heighestPow+1; i++) {
        if(coff[i] != 0) {
            cout << coff[i];
            for (int j=0; j<i; j++)
                cout << "*x";
            if(i == heighestPow)
                cout << endl;
            else
                cout << " + ";
        }
    }
}

void derivative(int heighestPow, float coff[], float dev_coff[])
{
    for (int i=0; i<heighestPow; i++) {
        dev_coff[i] = coff[i+1]*(i+1);
    }

    cout << "f'(x)= ";
    if (heighestPow == 0){
        cout << 0 << endl;
        return;
    }
    for (int i=0; i<heighestPow; i++) {
        if(dev_coff[i] != 0) {
            cout << dev_coff[i];
            for (int j=0; j<i; j++)
                cout << "*x";
            if(i == (heighestPow-1))
                cout << endl;
            else
                cout << " + ";
        }
    }
}

float compute(int heighestPow, float coff[], float x)
{
    float ans = 0;
    for (int i=0; i<heighestPow+1; i++) {
        ans = ans + (coff[i] * pow(x, i));
    }
    return ans;
}

int main()
{
    ifstream inp("polydata.txt", ios::in); //open file

    string line, word;
    while(getline(inp, line)) {
        float coff[MAX_POWER+1], dev_coff[MAX_POWER+1]; //declaration
        for (int j=0; j<100; j++) {
            coff[j] = 0;
            dev_coff[j] = 0;
        }
        int h_pow = 0;

        cout << "Please enter function x" << endl;
        int length = line.size(), flag = 0;   //examine illegal input
        for (int j=0; j<length; j++) {
            char c = line.at(j);
            if(!isdigit(c) && !isspace(c) && c!='.') {
                cout << "Wrong input!!Please enter digit" << endl;
           	flag = 1;
		break;
            } 
        }
	if(flag == 1)
	    continue;

        stringstream record(line);
        record >> word; //load first num

        int i=0;    //load cofficient to array
        while (record >> word) {
            coff[i] = stof(word);
            i++;
        }

        h_pow = heighestPower(coff);    //take heighest pow
        display(h_pow, coff);   //print function
        derivative(h_pow, coff, dev_coff);  //print derivative function

        float ans_1 = 0, ans_2 = 0; //compute ans
        ans_1 = compute(h_pow, coff, input_x);
        ans_2 = compute(h_pow, dev_coff, input_x);

        cout << "f(" << input_x << ") = " << round(ans_1) << endl;
        cout << "f'(" << input_x << ") = " << round(ans_2) << endl;
    }
    return 0;
}
