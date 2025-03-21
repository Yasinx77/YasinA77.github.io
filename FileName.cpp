#include <iostream>
using namespace std;

int main() {
    int limit; // Kullanýcýdan alýnacak sýnýr
    int a = 0; // Fibonacci dizisinin ilk sayýsý
    int b = 1; // Fibonacci dizisinin ikinci sayýsý

    cout << "Bir sinir giriniz: ";
    cin >> limit;

    cout << "Fibonacci sayilari: " << a << " ";

    while (b <= limit) {
        cout << b  << " ";
        b = a + b;
        a = b - a;
    }
}
