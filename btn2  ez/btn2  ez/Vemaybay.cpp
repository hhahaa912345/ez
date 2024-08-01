#include "vemaybay.h"
#include <iostream>

using namespace std;

Vemaybay::Vemaybay(string tenChuyen, string ngayBay, double giaVe)
    : tenChuyen(tenChuyen), ngayBay(ngayBay), giaVe(giaVe) {}

void Vemaybay::nhap() {
    cout << "Nhap ten chuyen: ";
    getline(cin, tenChuyen);
    cout << "Nhap ngay bay (dd/mm/yyyy): ";
    getline(cin, ngayBay);
    cout << "Nhap gia ve: ";
    cin >> giaVe;
    cin.ignore();
}

void Vemaybay::xuat() const {
    cout << "Ten chuyen: " << tenChuyen << endl;
    cout << "Ngay bay: " << ngayBay << endl;
    cout << "Gia ve: " << giaVe << endl;
}

double Vemaybay::getGiaVe() const {
    return giaVe;
}
