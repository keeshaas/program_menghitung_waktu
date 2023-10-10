#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v;
    double t;
    double sinA;

    cout << "Masukkan nilai s : " ;
	cin >> s;
	cout << "Masukkan nilai v : " ;
    cin >> v;
    sinA = sin(s * 22 / 7 / 180);
    t = 2 * (v * sinA) / 10;
    cout << " Waktu yang ditempuh : " ;
    cout << t << endl;
    return 0;
}

