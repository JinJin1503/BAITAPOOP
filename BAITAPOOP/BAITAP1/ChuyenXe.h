#ifndef CHUYENXE_H
#define CHUYENXE_H

#include <string>

// Lớp cơ sở ChuyenXe
class ChuyenXe {
protected:
    int ma_so;
    std::string ten_tai_xe;
    int so_xe;
    float doanh_thu;

public:
    ChuyenXe(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu);

    virtual float tinh_doanh_thu();
};

// Lớp con ChuyenXeNoiThanh kế thừa từ lớp ChuyenXe
class ChuyenXeNoiThanh : public ChuyenXe {
private:
    int so_tuyen;
    float so_km;

public:
    ChuyenXeNoiThanh(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu, int so_tuyen, float so_km);

    float tinh_doanh_thu() override;
};

// Lớp con ChuyenXeNgoaiThanh kế thừa từ lớp ChuyenXe
class ChuyenXeNgoaiThanh : public ChuyenXe {
private:
    std::string noi_den;
    int so_ngay;

public:
    ChuyenXeNgoaiThanh(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu, std::string noi_den, int so_ngay);

    float tinh_doanh_thu() override;
};

#endif


