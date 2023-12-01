#include <iostream>
using namespace std;

// Lớp trừu tượng
class HinhHoc {
public:
    virtual float tinhDienTich() const = 0; // Phương thức ảo
};

// Lớp con hình tròn kế thừa từ lớp trừu tượng HinhHoc
class HinhTron : public HinhHoc {
private:
    float banKinh;
public:
    HinhTron(float r) : banKinh(r) {}

    float tinhDienTich() const override {
        return 3.14 * banKinh * banKinh;
    }
};

// Lớp con hình vuông kế thừa từ lớp trừu tượng HinhHoc
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
    // HinhHoc hinh; // Không thể tạo đối tượng từ lớp trừu tượng

    HinhTron tron(5.0);
    HinhVuong vuong(4.0);

    // Sử dụng đa xạ để gọi phương thức tùy thuộc vào loại hình
    HinhHoc* hinh;

    hinh = &tron;
    cout << "Dien tich hinh tron: " << hinh->tinhDienTich() << endl;

    hinh = &vuong;
    cout << "Dien tich hinh vuong: " << hinh->tinhDienTich() << endl;

    return 0;
}
