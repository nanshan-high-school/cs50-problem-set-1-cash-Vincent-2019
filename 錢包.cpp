#include <iostream>
using namespace std;
int main() {
int money;
int unitplace;
int tenplace;
int hundredplace;
int thousandplace;
cout << "請輸入金額(小於9999):";
cin >> money;
int m = money;
unitplace = m / 1 % 10;
tenplace = m / 10 % 10;
hundredplace = m / 100 % 10;
thousandplace = m / 1000 % 10;
cout << "個位" << unitplace << "\n";
cout << "十位" << tenplace << "\n";
cout << "百位" << hundredplace << "\n";
cout << "千位" << thousandplace << "\n";
}
