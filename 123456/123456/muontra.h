#ifndef MUONTRA_H
#define MUONTRA_H

#include "sach.h"

class MuonTra : public Sach {
private:
    int maDocGia;
    int soLuong;
    static double phiCuocMuonTra;

public:
    MuonTra();
    MuonTra(int maSach, string tenSach, int maDocGia, int soLuong);
    void nhap();
    void xuat() const;
    double tinhTienMuonTra() const;
    static double getPhiCuocMuonTra();
    int getMaDocGia() const;
    int getSoLuong() const;
};

#endif
