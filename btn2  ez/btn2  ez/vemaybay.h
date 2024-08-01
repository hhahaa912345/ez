
#include <string>

using namespace std;

class Vemaybay {
public:
    Vemaybay(string tenChuyen = "", string ngayBay = "", double giaVe = 0.0);

    void nhap();
    void xuat() const;
    double getGiaVe() const;

private:
    string tenChuyen;
    string ngayBay;
    double giaVe;
};
