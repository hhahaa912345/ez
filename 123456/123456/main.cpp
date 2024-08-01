#include <iostream>
#include <vector>
#include "muontra.h"

using namespace std;

void nhapSoLuong(int& n, const string& message, int maxLimit = numeric_limits<int>::max()) {
    cout << message;
    while (!(cin >> n) || n <= 0 || n > maxLimit) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Gia tri khong hop le. " << message;
    }
    cin.ignore(); // Clear newline character from buffer
}

int main() {
    vector<Sach> dsSach;
    vector<MuonTra> dsMuonTra;
    int n;

    nhapSoLuong(n, "Nhap so luong sach: ");

    for (int i = 0; i < n; ++i) {
        Sach sa;
        cout << "Nhap thong tin quyen sach thu " << i + 1 << ": " << endl;
        sa.nhapThongTin();
        dsSach.push_back(sa);
    }

    cout << "\nDanh sach sach vua nhap:\n";
    for (int i = 0; i < dsSach.size(); ++i) {
        cout << "Sach thu " << i + 1 << ":\n";
        dsSach[i].xuatThongTin();
    }

    nhapSoLuong(n, "Nhap so luong muon tra: ", 10000); // Giới hạn số lượng mượn trả

    for (int i = 0; i < n; ++i) {
        MuonTra mt;
        cout << "Nhap thong tin muon tra thu " << i + 1 << ": " << endl;
        mt.nhap();
        dsMuonTra.push_back(mt);
    }

    cout << "\nDanh sach muon tra vua nhap:\n";
    for (int i = 0; i < dsMuonTra.size(); ++i) {
        cout << "Muon tra thu " << i + 1 << ":\n";
        dsMuonTra[i].xuat();
    }

    cout << "\nMuon tra co so luong lon hon 10:\n";
    for (int i = 0; i < dsMuonTra.size(); ++i) {
        if (dsMuonTra[i].getSoLuong() > 10) {
            dsMuonTra[i].xuat();
        }
    }

    if (!dsMuonTra.empty()) {
        MuonTra maxMuonTra = dsMuonTra[0];
        for (int i = 1; i < dsMuonTra.size(); ++i) {
            if (dsMuonTra[i].tinhTienMuonTra() > maxMuonTra.tinhTienMuonTra()) {
                maxMuonTra = dsMuonTra[i];
            }
        }

        cout << "\nMuon tra co so tien cuoc lon nhat:\n";
        maxMuonTra.xuat();
    }
    else {
        cout << "\nKhong co muon tra nao de hien thi.\n";
    }

    return 0;
}
