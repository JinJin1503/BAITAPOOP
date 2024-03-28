#include <bits/stdc++.h>
 
using namespace std;
 
class SinhVien {
private:
	string MSSV;
	string HoTen;
	int SoBuoiVang;
	float DiemTH;
	float DiemGK;
	float DiemQT;
public:
	SinhVien(string MSSV, string HoTen, int SoBuoiVang, float DiemTH, float DiemGK) {
		this->MSSV = MSSV;
		this->HoTen = HoTen;
		this->SoBuoiVang = SoBuoiVang;
		this->DiemTH = DiemTH;
		this->DiemGK = DiemGK;
	}
	void Xuat() {
		cout << "Ma SV: " << MSSV << endl;
        cout << "Ho ten: " << HoTen << endl;
        cout << "So buoi vang: " << SoBuoiVang << endl;
        cout << "Diem TH: " << DiemTH << endl;
        cout << "Diem GK: " << DiemGK << endl;
        cout << "Diem QT: " << DiemQT << endl;
        cout << "---------------------------" << endl;
	}
	void DQT() {
		if (this->SoBuoiVang <= 5) 
			this->DiemQT = (10 - this->SoBuoiVang * 2) * 0.2 + this->DiemTH * 0.3 + this->DiemGK * 0.5;
		else 
			this->DiemQT = 0;
	}
	friend class LopHoc;
};
 
string splitName(string s) {
	string ans = "";
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == ' ') break;
		ans = s[i] + ans;
	}
	return ans;
}
 
class LopHoc {
private:
	vector<SinhVien> List;
public:
	LopHoc(vector<SinhVien> List) {
		this->List = List;
	}
	void TinhDiemQT() {
		for (int i = 0; i < (int)List.size(); i++) {
			this->List[i].DQT();
		}
	}
	void XuatThongTin() {
		for (int i = 0; i < (int)List.size(); i++) {
			List[i].Xuat();
		}
	}
	void SVDuDieuKien() {
		cout << "Cac sinh vien du dieu kien du thi la: " << endl;
		for (int i = 0; i < (int)List.size(); i++) {
			if (List[i].DiemQT >= 3) cout << List[i].HoTen << endl;
		}
		cout << "---------------------------" << endl; 
	}
	void SVHoNguyen() {
		cout << "Cac sinh vien co ho Nguyen la: " << endl;
		for (int i = 0; i < (int)List.size(); i++) {
			if (List[i].HoTen.size() >= 6 && List[i].HoTen.substr(0, 6) == "Nguyen") cout << List[i].HoTen << endl;
		}
		cout << "---------------------------" << endl; 
	}
	void SVCungTen() {
		map<string, int> mp;
		for (int i = 0; i < (int)List.size(); i++) {
			mp[splitName(List[i].HoTen)]++;
		}
		cout << "Cac sinh vien co ten giong voi sinh vien khac la: " << endl;
		for (int i = 0; i < (int)List.size(); i++) {
			if (mp[splitName(List[i].HoTen)] > 1) cout << List[i].HoTen << endl;
		}
		cout << "---------------------------" << endl; 
	}
};
 
vector<SinhVien> Input() {
	int SoSV;
	vector<SinhVien> A;
	cout << "Nhap so sinh vien: "; cin >> SoSV;
	for (int i = 0; i < SoSV; i++) {
		string MSSV;
		string HoTen;
		int SoBuoiVang;
		float DiemTH;
		float DiemGK;
		cout << "Nhap MSSV: "; cin >> MSSV;
		cin.ignore();
		cout << "Nhap ho ten: "; getline(cin, HoTen);
		cout << "Nhap so buoi vang: "; cin >> SoBuoiVang;
		cout << "Nhap diem thuc hanh: "; cin >> DiemTH;
		cout << "Nhap diem giua ky: "; cin >> DiemGK;
		A.push_back(SinhVien(MSSV, HoTen, SoBuoiVang, DiemTH, DiemGK));
	}
	return A;
}
 
int main() {
	//Problem 2.1: Nhap thong tin
	vector<SinhVien> A = Input();
 
	LopHoc LH(A);
 
	//Problem 3: Tinh diem qua trinh
	LH.TinhDiemQT();
 
	//Problem 2.2: Xuat thong tin
	LH.XuatThongTin();
 
	//Problem 4: Danh sach cac sinh vien du dieu kien du thi
	LH.SVDuDieuKien();
 
	//Problem 5: Sinh vien co ho Nguyen
	LH.SVHoNguyen();
 
	//Problem 6: Danh sach co cung ten voi SV khac
	LH.SVCungTen();
}