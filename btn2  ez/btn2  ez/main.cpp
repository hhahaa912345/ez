#include <iostream>
#include <vector>
#include <algorithm>
#include "Hanhkhach.h"

using namespace std;

void hienThiHanhKhach(const vector<Hanhkhach>& hanhKhachList) {
    for (const auto& hanhKhach : hanhKhachList) {
        hanhKhach.xuat();
        cout << "Tong tien: " << hanhKhach.tongTien() << endl << endl;
    }
}

bool compareByTotalMoney(const Hanhkhach& a, const Hanhkhach& b) {
    return a.tongTien() > b.tongTien();
}

int main() {
    int n;
    cout << "Nhap so luong hanh khach: ";
    cin >> n;
    cin.ignore();

    vector<Hanhkhach> hanhKhachList(n);

    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin hanh khach " << i + 1 << ":" << endl;
        hanhKhachList[i].nhap();
    }

    sort(hanhKhachList.begin(), hanhKhachList.end(), compareByTotalMoney);

    cout << "Danh sach hanh khach sau khi sap xep:" << endl;
    hienThiHanhKhach(hanhKhachList);

    return 0;
}
