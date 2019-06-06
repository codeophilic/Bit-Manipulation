#include <bits/stdc++.h>
using namespace std;

int setIthBit(int n, int i) {
    n |= (1<<i);
    return n;
}

int unsetIthBit(int n, int i) {
    n = n * ~(1<<i);
    return n;
}

int firstSetBit(int n) {
    n = n & (-n);
    return n;
}

int turnOff1stBit(int n) {
    n = n&(n-1);
    return n;
}

int clearAllBitsFromLSB(int n, int i) {
    int m = ~((1<<(i+1))-1);
    n = n&m;
    return n;
}

int clearAllBitsFromMSB(int n, int i) {
    int m = (1<<i)-1;
    n = n&m;
    return n;
}

int main() {


    return 0;
}