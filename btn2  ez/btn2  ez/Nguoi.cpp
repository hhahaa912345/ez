#include "nguoi.h"
#include <iostream>

using namespace std;

Nguoi::Nguoi(string hoten, string gioitinh, int tuoi)
    : hoten(hoten), gioitinh(gioitinh), tuoi(tuoi) {}

Nguoi::~Nguoi() {}

void Nguoi::nhap() {
    cout << "Ho ten: ";
    getline(cin, hoten);
    cout << "Gioi tinh: ";
    getline(cin, gioitinh);
    cout << "Tuoi: ";
    while (true) {
        cin >> tuoi;
        if (tuoi >= 0) break;
        cout << "Tuoi khong hop le. Nhap lai: ";
    }
    cin.ignore();
}

void Nguoi::xuat() const {
    cout << "Ho ten: " << hoten << endl;
    cout << "Gioi tinh: " << gioitinh << endl;
    cout << "Tuoi: " << tuoi << endl;
}
