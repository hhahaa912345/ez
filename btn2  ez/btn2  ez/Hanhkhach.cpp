#include "hanhkhach.h"
#include <iostream>

using namespace std;

Hanhkhach::Hanhkhach(string hoten, string gioitinh, int tuoi, vector<Vemaybay> ve)
    : Nguoi(hoten, gioitinh, tuoi), ve(ve) {}

Hanhkhach::~Hanhkhach() {}

void Hanhkhach::nhap() {
    Nguoi::nhap();
    int soLuongVe;
    cout << "Nhap so luong ve: ";
    cin >> soLuongVe;
    cin.ignore();
    ve.resize(soLuongVe);
    for (int i = 0; i < soLuongVe; ++i) {
        cout << "Nhap thong tin ve " << i + 1 << ":" << endl;
        ve[i].nhap();
    }
}

void Hanhkhach::xuat() const {
    Nguoi::xuat();
    cout << "So luong ve: " << ve.size() << endl;
    for (int i = 0; i < ve.size(); ++i) {
        cout << "Ve " << i + 1 << ":" << endl;
        ve[i].xuat();
    }
}

double Hanhkhach::tongTien() const {
    double tong = 0.0;
    for (const auto& ticket : ve) {
        tong += ticket.getGiaVe();
    }
    return tong;
}
