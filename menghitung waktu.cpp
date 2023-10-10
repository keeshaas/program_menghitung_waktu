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
    int s;
    int v;
    double jarak;
    double srad;
    
    cout << "Masukan nilai s : ";
    cin >> s;
    cout << "Masukan nilai v : ";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout << "Waktu yang ditempuh : ";
    cout << jarak << endl;
    return 0;
}
