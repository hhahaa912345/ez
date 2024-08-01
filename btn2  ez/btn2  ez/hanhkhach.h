

#include "nguoi.h"
#include "Vemaybay.h"
#include <vector>

using namespace std;

class Hanhkhach : public Nguoi {
public:
    Hanhkhach(string hoten = "", string gioitinh = "", int tuoi = 0, vector<Vemaybay> ve = vector<Vemaybay>());
    ~Hanhkhach();

    void nhap() override;
    void xuat() const override;
    double tongTien() const;

private:
    vector<Vemaybay> ve;
};
