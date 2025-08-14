#include <bits/stdc++.h>
using namespace std;

int main() {
    const int TicketPrice = 300;
    double TotalPrice = TicketPrice;

    int age;
    cout << "Enter age: ";
    cin >> age;

    char Student;
    cout << "Enter student status (S/N): ";
    cin >> Student;

    // Age-based discount
    if (age <= 10) {
        TotalPrice = TicketPrice * 0.5; // 50% discount
    }
    else if (age > 60) {
        TotalPrice = TicketPrice * 0.7; // 30% discount
    }

    // Student discount (applies after age discount)
    if (Student == 'S') {
        TotalPrice -= 50;
    }

    cout << (int)TotalPrice;
    return 0;
}
