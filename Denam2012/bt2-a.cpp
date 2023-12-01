#include <iostream>
using namespace std;

// Lớp cơ sở
class HinhHoc {
public:
    virtual float tinhDienTich() const {
        return 0.0;
    }
};

// Lớp con hình tròn
class HinhTron : public HinhHoc {
private:
    float banKinh;
public:
    HinhTron(float r) : banKinh(r) {}

    float tinhDienTich() const override {
        return 3.14 * banKinh * banKinh;
    }
};

// Lớp con hình vuông
class HinhVuong : public HinhHoc {
private:
    float canh;
public:
    HinhVuong(float s) : canh(s) {}

    float tinhDienTich() const override {
        return canh * canh;
    }
};

int main() {
    HinhTron tron(5.0);
    HinhVuong vuong(4.0);

    HinhHoc* hinh;

    // Gọi phương thức tinhDienTich() tùy thuộc vào loại hình
    hinh = &tron;
    cout << "Dien tich hinh tron: " << hinh->tinhDienTich() << endl;

    hinh = &vuong;
    cout << "Dien tich hinh vuong: " << hinh->tinhDienTich() << endl;

    return 0;
}
