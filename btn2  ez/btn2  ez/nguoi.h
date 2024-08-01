
#include <string>

using namespace std;

class Nguoi {
public:
    Nguoi(string hoten = "", string gioitinh = "", int tuoi = 0);
    virtual ~Nguoi();

    virtual void nhap();
    virtual void xuat() const;

protected:
    string hoten;
    string gioitinh;
    int tuoi;
};
