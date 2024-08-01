#include "sach.h"
#include <limits>

Sach::Sach() : maSach(0), tenSach("") {}

Sach::Sach(int maSach, string tenSach) : maSach(maSach), tenSach(tenSach) {}

void Sach::nhapThongTin() {
    cout << "Nhap ma sach: ";
    while (!(cin >> maSach) || maSach <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Gia tri khong hop le. Nhap lai ma sach (so nguyen duong): ";
    }
    cin.ignore(); // Clear newline character from buffer
    cout << "Nhap ten sach: ";
    getline(cin, tenSach);
}

void Sach::xuatThongTin() const {
    cout << "Ma sach: " << maSach << "\n";
    cout << "Ten sach: " << tenSach << "\n";
}

int Sach::getMaSach() const {
    return maSach;
}

string Sach::getTenSach() const {
    return tenSach;
}
