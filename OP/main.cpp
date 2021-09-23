//
//  main.cpp
//  ОП
//
//  Created by Andrey Meshkov on 22.09.2021.
//

#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int x1, y1, x2, y2, x3, y3;
    float a, b, c, P, p, s;
    cout << "A= ";
    cin >> x1 >> y1;
    cout << "B= ";
    cin >> x2 >> y2;
    cout << "C= ";
    cin >> x3 >> y3;
    a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    P=a+b+c;
    p=P/2;
    s=sqrt(p*(p-a)*(p-b)*(p-b));
    cout << "P= " << P << endl;
    cout << "s= " << s << endl;
    
}
