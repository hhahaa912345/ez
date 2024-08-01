#include "muontra.h"
#include <limits>

double MuonTra::phiCuocMuonTra = 10000.0;

MuonTra::MuonTra() : Sach(), maDocGia(0), soLuong(0) {}

MuonTra::MuonTra(int maSach, string tenSach, int maDocGia, int soLuong)
    : Sach(maSach, tenSach), maDocGia(maDocGia), soLuong(soLuong) {}

void MuonTra::nhap() {
    Sach::nhapThongTin();
    cout << "Nhap ma doc gia: ";
    while (!(cin >> maDocGia) || maDocGia <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Gia tri khong hop le. Nhap lai ma doc gia (so nguyen duong): ";
    }
    cout << "Nhap so luong: ";
    while (!(cin >> soLuong) || soLuong <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Gia tri khong hop le. Nhap lai so luong (so nguyen duong): ";
    }
    cin.ignore(); // Clear newline character from buffer
}

void MuonTra::xuat() const {
    Sach::xuatThongTin();
    cout << "Ma doc gia: " << maDocGia << endl;
    cout << "So luong: " << soLuong << endl;
    cout << "Tien cuoc ma can tra: " << tinhTienMuonTra() << endl;
}

double MuonTra::tinhTienMuonTra() const {
    return soLuong * phiCuocMuonTra;
}

double MuonTra::getPhiCuocMuonTra() {
    return phiCuocMuonTra;
}

int MuonTra::getMaDocGia() const {
    return maDocGia;
}

int MuonTra::getSoLuong() const {
    return soLuong;
}
