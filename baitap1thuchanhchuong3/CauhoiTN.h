#ifndef CAUHOITN_H
#define CAUHOITN_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class CauhoiTN {
private:
    string noiDung;
    string dapAnA;
    string dapAnB;
    char dapAnDung;

public:
    void nhap();
    void docfile(std::ifstream& f);
    void ghifile(std::ofstream& f) const;
    bool kiemtra() const;
    void xuat() const;
    friend bool giongnhau(CauhoiTN cau1, CauhoiTN cau2);
};

#endif 