#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double  a, b, c, s, area;
	while(1){
		cout << "Please enter 3 triangle sides:" << endl;
		cin >> a >> b >> c;
		if (a==-1 && b==-1 && c==-1)
			break;
		if (a<=0 || b<=0 || c<=0){
			cout << "The input is not legal" << endl;
			continue;
		}
		else if ((a+b)<c || (a+c)<b || (b+c)<a){
			cout << "The input is not legal" << endl;
			continue;
		}
		s = (a + b + c)/2;
		area = sqrt(s * (s-a) * (s-b) * (s-c));
		cout << "The area of this triangle is:" << area << endl;
	}
	return 0;
}
