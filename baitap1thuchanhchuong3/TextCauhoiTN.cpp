#include <iostream>
#include <fstream>
#include <vector>
#include "CauhoiTN.h"

using namespace std;

void taoDeThi(vector<CauhoiTN>& deThi) {
    int soCau;
    cout << "Nhap so cau hoi trong de thi: ";
    cin >> soCau;
    deThi.resize(soCau);
    for (int i = 0; i < soCau; ++i) {
        cout << "Nhap thong tin cho cau hoi " << i + 1 << ":" << endl;
        deThi[i].nhap();
    }
}

void themCauHoi(vector<CauhoiTN>& deThi) {
    CauhoiTN cauMoi;
    cout << "Nhap thong tin cho cau hoi moi:" << endl;
    cauMoi.nhap();
    deThi.push_back(cauMoi);
}

void inDanhSachCauHoi(const vector<CauhoiTN>& deThi) {
    for (size_t i = 0; i < deThi.size(); ++i) {
        cout << "Cau hoi " << i + 1 << ":" << endl;
        deThi[i].xuat();
        cout << endl;
    }
}

void luuDanhSachCauHoi(const vector<CauhoiTN>& deThi, const string& tenFile) {
    ofstream f(tenFile);
    if (f.is_open()) {
        for (const auto& cau : deThi) {
            cau.ghifile(f);
            f << endl;
        }
        cout << "Da luu danh sach cau hoi vao file " << tenFile << endl;
    }
    else {
        cout << "Khong mo duoc file " << tenFile << endl;
    }
}

void docDanhSachCauHoi(vector<CauhoiTN>& deThi, const string& tenFile) {
    ifstream f(tenFile);
    if (f.is_open()) {
        deThi.clear();
        while (!f.eof()) {
            CauhoiTN cau;
            cau.docfile(f);
            if (!f.eof()) {
                deThi.push_back(cau);
            }
        }
        cout << "Da doc danh sach cau hoi tu file " << tenFile << endl;
    }
    else {
        cout << "Khong mo duoc file " << tenFile << endl;
    }
}

int thi(const vector<CauhoiTN>& deThi) {
    int soCauDung = 0;
    for (const auto& cau : deThi) {
        if (cau.kiemtra()) {
            ++soCauDung;
        }
    }
    cout << "So cau tra loi dung: " << soCauDung << "/" << deThi.size() << endl;
    return soCauDung;
}

int main() {
    vector<CauhoiTN> deThi;
    int luaChon;
    string tenFile;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Tao mot de thi moi" << endl;
        cout << "2. Them mot cau hoi vao de thi hien hanh" << endl;
        cout << "3. In danh sach cau hoi trong de thi" << endl;
        cout << "4. Luu danh sach cau hoi vao file" << endl;
        cout << "5. Doc danh sach cau hoi tu file" << endl;
        cout << "6. Thi" << endl;
        cout << "7. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
        case 1:
            taoDeThi(deThi);
            break;
        case 2:
            themCauHoi(deThi);
            break;
        case 3:
            inDanhSachCauHoi(deThi);
            break;
        case 4:
            cout << "Nhap ten file (*.TTN): ";
            cin >> tenFile;
            luuDanhSachCauHoi(deThi, tenFile);
            break;
        case 5:
            cout << "Nhap ten file (*.TTN): ";
            cin >> tenFile;
            docDanhSachCauHoi(deThi, tenFile);
            break;
        case 6:
            if (!deThi.empty()) {
                thi(deThi);
            }
            else {
                cout << "De thi rong. Vui long tao de thi truoc khi thi." << endl;
            }
            break;
        case 7:
            cout << "Tam biet!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
            break;
        }
    } while (luaChon != 7);

    return 0;
}