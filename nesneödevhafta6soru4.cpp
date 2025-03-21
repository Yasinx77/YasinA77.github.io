#include <iostream>
using namespace std;

int main() {
    int sayi = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue; // 3'e veya 5'e tam bölünen sayıları atla
        }
        sayi += i; // Geri kalan sayıları topla
    }

    cout << "3'e ve 5'e tam bolunmeyen sayilarin toplami: " << sayi << endl;

    return 0;
}
