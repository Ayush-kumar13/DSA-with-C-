#include <iostream>
using namespace std;

int getValue(char ch) {
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    else
        return ch - 'A' + 10;
}

char getChar(int val) {
    if (val <= 9)
        return val + '0';
    else
        return val - 10 + 'A';
}

int convertToDecimal(string sn, int sb) {
    int decimal = 0;

    for (char ch : sn) {
        int digit = getValue(ch);
        decimal = decimal * sb + digit;
    }

    return decimal;
}

string convertToBase(int decimal, int db) {
    if (decimal == 0)
        return "0";

    string ans = "";

    while (decimal > 0) {
        int rem = decimal % db;
        ans = getChar(rem) + ans;
        decimal /= db;
    }

    return ans;
}

string convert(int sb, int db, string sn) {
    int decimal = convertToDecimal(sn, sb);
    return convertToBase(decimal, db);
}

int main() {
    int sb, db;
    string sn;

    cin >> sb >> db >> sn;

    cout << convert(sb, db, sn);

    return 0;
}