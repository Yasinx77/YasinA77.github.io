#include <iostream>
using namespace std;

int main() {
    int number, sayi = 0, count = 0;

    cout << "Pozitif sayilar giriniz (negatif bir sayi ile cikis yapabilirsiniz): " << endl;

    while (true) {
        cin >> number;
        if (number < 0) break; // Negatif sayı girilince döngüyü sonlandır
        sayi += number; // Pozitif sayıları toplar
        count++; // Pozitif sayıların adedini sayar
    }

    if (count > 0) {
        cout << "Girilen sayilarin ortalamasi: " << (double)sayi / count << endl;
    }
    else {
        cout << "Hic pozitif sayi girilmedi." << endl;
    }

    return 0;
}
