#include "ChuyenXe.h"

// Cài đặt phương thức của lớp ChuyenXe
ChuyenXe::ChuyenXe(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu) : ma_so(ma_so), ten_tai_xe(ten_tai_xe), so_xe(so_xe), doanh_thu(doanh_thu) {}

float ChuyenXe::tinh_doanh_thu() {
    return doanh_thu;
}

// Cài đặt phương thức của lớp ChuyenXeNoiThanh
ChuyenXeNoiThanh::ChuyenXeNoiThanh(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu, int so_tuyen, float so_km) : ChuyenXe(ma_so, ten_tai_xe, so_xe, doanh_thu), so_tuyen(so_tuyen), so_km(so_km) {}

float ChuyenXeNoiThanh::tinh_doanh_thu() {
    return doanh_thu;
}

// Cài đặt phương thức của lớp ChuyenXeNgoaiThanh
ChuyenXeNgoaiThanh::ChuyenXeNgoaiThanh(int ma_so, std::string ten_tai_xe, int so_xe, float doanh_thu, std::string noi_den, int so_ngay) : ChuyenXe(ma_so, ten_tai_xe, so_xe, doanh_thu), noi_den(noi_den), so_ngay(so_ngay) {}

float ChuyenXeNgoaiThanh::tinh_doanh_thu() {
    return doanh_thu;
}
