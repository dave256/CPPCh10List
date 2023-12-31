//
//  main.cpp
//  CPPCh10List
//
//  Created by David Reed on 9/7/23.
//

#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

#include "List.hpp"

void f1() {
    List a, b;

    a.append(3);
    b = a;
    b.append(4);
    a.append(5);

    cout << "a:" << endl;
    for (int i=0; i<a.size(); ++i) {
        cout << "[" << i << "] : " << a[i] << endl;
    }

    cout << "b:" << endl;
    for (int i=0; i<b.size(); ++i) {
        cout << "[" << i << "] : " << b[i] << endl;
    }
}

void f2Helper(List &a, List &b) {
    a.append(4);
    b.append(5);
    a = b;
}

void f2() {
    List a;

    a.append(3);
    f2Helper(a, a);

    cout << "a:" << endl;
    for (int i=0; i<a.size(); ++i) {
        cout << "[" << i << "] : " << a[i] << endl;
    }
}

void f3Helper(List a) {
    a.append(4);

    cout << "a:" << endl;
    for (int i=0; i<a.size(); ++i) {
        cout << "[" << i << "] : " << a[i] << endl;
    }
}

void f3() {
    List a;
    a.append(2);
    a.append(3);
    f3Helper(a);
    cout << "a:" << endl;
    for (int i=0; i<a.size(); ++i) {
        cout << "[" << i << "] : " << a[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    f1();
    f2();
    f3();

    return 0;
}
