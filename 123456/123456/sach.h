#ifndef SACH_H
#define SACH_H

#include <iostream>
#include <string>
using namespace std;

class Sach {
private:
    int maSach;
    string tenSach;

public:
    Sach();
    Sach(int maSach, string tenSach);
    void nhapThongTin();
    void xuatThongTin() const;
    int getMaSach() const;
    string getTenSach() const;
};

#endif
