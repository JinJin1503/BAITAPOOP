#include "CauhoiTN.h"

void CauhoiTN::nhap() {
    if (cin.peek() == '\n') {
        cin.ignore();
    }
    cout << "Nhap noi dung cau hoi: ";
    getline(cin, noiDung);
    cout << "Nhap dap an A: ";
    getline(cin, dapAnA);
    cout << "Nhap dap an B: ";
    getline(cin, dapAnB);
    cout << "Nhap dap an dung (A hoac B): ";
    cin >> dapAnDung;
}

void CauhoiTN::docfile(ifstream& f) {
    getline(f, noiDung);
    getline(f, dapAnA);
    getline(f, dapAnB);
    f >> dapAnDung;
    f.ignore();
}

void CauhoiTN::ghifile(ofstream& f) const {
    f << noiDung << endl;
    f << dapAnA << endl;
    f << dapAnB << endl;
    f << dapAnDung << endl;
}

bool CauhoiTN::kiemtra() const {
    cout << this->noiDung << endl;
    cout << "A. " << this->dapAnA << endl;
    cout << "B. " << this->dapAnB << endl;
    char traLoi;
    cout << "Nhap dap an cua ban (A hoac B): ";
    cin >> traLoi;
    return traLoi == this->dapAnDung;
}

void CauhoiTN::xuat() const {
    cout << "Cau hoi: " << noiDung << endl;
    cout << "A. " << dapAnA << endl;
    cout << "B. " << dapAnB << endl;
    cout << "Dap an dung: " << dapAnDung << endl;
}

bool giongnhau(CauhoiTN cau1, CauhoiTN cau2) {
    return (cau1.noiDung == cau2.noiDung) && (cau1.dapAnA == cau2.dapAnA) &&
        (cau1.dapAnB == cau2.dapAnB) && (cau1.dapAnDung == cau2.dapAnDung);
}
