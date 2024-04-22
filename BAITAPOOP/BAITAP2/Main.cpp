#include <iostream>
#include "Sach.h"

int main() {
    // Tạo các đối tượng sách
    SachGiaoKhoa sach_gk(1, "01/04/2024", 10000, 50, "NXB ABC", "mới");
    SachThamKhao sach_tk(2, "05/04/2024", 15000, 30, "NXB XYZ", 500);

    // Tính thành tiền của các đối tượng sách
    float thanh_tien_gk = sach_gk.tinh_thanh_tien();
    float thanh_tien_tk = sach_tk.tinh_thanh_tien();

    // In ra thành tiền của các đối tượng sách
    std::cout << "Thanh tien sach giao khoa: " << thanh_tien_gk << std::endl;
    std::cout << "Thanh tien sach tham khao: " << thanh_tien_tk << std::endl;

    return 0;
}

