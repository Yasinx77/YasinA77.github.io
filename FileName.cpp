#include <iostream>
using namespace std;

int main() {
    int limit; // Kullan�c�dan al�nacak s�n�r
    int a = 0; // Fibonacci dizisinin ilk say�s�
    int b = 1; // Fibonacci dizisinin ikinci say�s�

    cout << "Bir sinir giriniz: ";
    cin >> limit;

    cout << "Fibonacci sayilari: " << a << " ";

    while (b <= limit) {
        cout << b  << " ";
        b = a + b;
        a = b - a;
    }
}
