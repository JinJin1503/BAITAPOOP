#ifndef SACH_H
#define SACH_H

#include <string>

// Lớp cơ sở Sach
class Sach {
protected:
    int ma_sach;
    std::string ngay_nhap;
    float don_gia;
    int so_luong;
    std::string nha_xuat_ban;

public:
    // Constructor
    Sach(int ma, std::string ngay, float gia, int soLuong, std::string nxb);

    // Phương thức tính thành tiền, sẽ được ghi đè trong các lớp con
    virtual float tinh_thanh_tien();
};

// Lớp con SachGiaoKhoa kế thừa từ lớp Sach
class SachGiaoKhoa : public Sach {
private:
    std::string tinh_trang; // "mới" hoặc "cũ"

public:
    // Constructor
    SachGiaoKhoa(int ma, std::string ngay, float gia, int soLuong, std::string nxb, std::string tt);

    // Ghi đè phương thức tính thành tiền
    float tinh_thanh_tien() override;
};

// Lớp con SachThamKhao kế thừa từ lớp Sach
class SachThamKhao : public Sach {
private:
    float thue;

public:
    // Constructor
    SachThamKhao(int ma, std::string ngay, float gia, int soLuong, std::string nxb, float tax);

    // Ghi đè phương thức tính thành tiền
    float tinh_thanh_tien() override;
};

#endif
