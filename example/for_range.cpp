#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
    int array_int[5] = {1,2,3,4,5};
    for (auto i : array_int) {
        cout << i << endl;
    }
    return 0;
}

