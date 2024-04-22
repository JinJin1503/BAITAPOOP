#include <iostream>
#include <vector>
#include "ChuyenXe.h"

int main() {
    // Tạo danh sách chứa các chuyến xe
    std::vector<ChuyenXe*> danh_sach_chuyen_xe;

    // Tạo các chuyến xe nội thành
    ChuyenXeNoiThanh chuyen_xe_noi_thanh_1(1, "Tai xe A", 123, 1000, 1, 50);
    ChuyenXeNoiThanh chuyen_xe_noi_thanh_2(2, "Tai xe B", 456, 1500, 2, 70);

    // Tạo các chuyến xe ngoại thành
    ChuyenXeNgoaiThanh chuyen_xe_ngoai_thanh_1(3, "Tai xe C", 789, 2000, "Nha Trang", 3);
    ChuyenXeNgoaiThanh chuyen_xe_ngoai_thanh_2(4, "Tai xe D", 1011, 2500, "Da Lat", 4);

    // Thêm các chuyến xe vào danh sách
    danh_sach_chuyen_xe.push_back(&chuyen_xe_noi_thanh_1);
    danh_sach_chuyen_xe.push_back(&chuyen_xe_noi_thanh_2);
    danh_sach_chuyen_xe.push_back(&chuyen_xe_ngoai_thanh_1);
    danh_sach_chuyen_xe.push_back(&chuyen_xe_ngoai_thanh_2);

    // Tính tổng doanh thu cho tất cả các chuyến xe và từng loại chuyến xe
    float tong_doanh_thu_tat_ca = 0;
    float tong_doanh_thu_noi_thanh = 0;
    float tong_doanh_thu_ngoai_thanh = 0;

    for (ChuyenXe* chuyen_xe : danh_sach_chuyen_xe) {
        tong_doanh_thu_tat_ca += chuyen_xe->tinh_doanh_thu();
        if (dynamic_cast<ChuyenXeNoiThanh*>(chuyen_xe)) {
            tong_doanh_thu_noi_thanh += chuyen_xe->tinh_doanh_thu();
        }
        else if (dynamic_cast<ChuyenXeNgoaiThanh*>(chuyen_xe)) {
            tong_doanh_thu_ngoai_thanh += chuyen_xe->tinh_doanh_thu();
        }
    }

    // Xuất tổng doanh thu
    std::cout << "Tong doanh thu tat ca cac chuyen xe: " << tong_doanh_thu_tat_ca << std::endl;
    std::cout << "Tong doanh thu chuyen xe noi thanh: " << tong_doanh_thu_noi_thanh << std::endl;
    std::cout << "Tong doanh thu chuyen xe ngoai thanh: " << tong_doanh_thu_ngoai_thanh << std::endl;

    return 0;
}
