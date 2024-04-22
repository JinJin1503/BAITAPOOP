#include "Sach.h"

// Constructor của lớp Sach
Sach::Sach(int ma, std::string ngay, float gia, int soLuong, std::string nxb)
    : ma_sach(ma), ngay_nhap(ngay), don_gia(gia), so_luong(soLuong), nha_xuat_ban(nxb) {}

// Phương thức tính thành tiền của lớp Sach
float Sach::tinh_thanh_tien() {
    return so_luong * don_gia;
}

// Constructor của lớp SachGiaoKhoa
SachGiaoKhoa::SachGiaoKhoa(int ma, std::string ngay, float gia, int soLuong, std::string nxb, std::string tt)
    : Sach(ma, ngay, gia, soLuong, nxb), tinh_trang(tt) {}

// Phương thức tính thành tiền của lớp SachGiaoKhoa
float SachGiaoKhoa::tinh_thanh_tien() {
    if (tinh_trang == "mới") {
        return so_luong * don_gia;
    }
    else if (tinh_trang == "cũ") {
        return so_luong * don_gia * 0.5;
    }
    return 0;
}

// Constructor của lớp SachThamKhao
SachThamKhao::SachThamKhao(int ma, std::string ngay, float gia, int soLuong, std::string nxb, float tax)
    : Sach(ma, ngay, gia, soLuong, nxb), thue(tax) {}

// Phương thức tính thành tiền của lớp SachThamKhao
float SachThamKhao::tinh_thanh_tien() {
    return so_luong * don_gia + thue;
}
