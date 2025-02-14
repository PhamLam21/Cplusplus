# C++  
## String  
- Cộng 2 string như toán tử, ví dụ: "Lâm " + "Phạm" = "Lâm Phạm" 
- append = cộng str : str1.append(" " + str2)
- to_string("tham số"): chuyển về kiểu string 
- length() -> độ dài của chuỗi
- empty() -> trả về 0 là chuỗi có ký tự , 1 là chuỗi trống
- getline(cin, biến) -> nhập chuỗi lấy cả ký tự cuối xuống dòng
Lưu ý: cin khi nhập chuỗi không nhận ký tự cách
## Class, object
**Class** 1 kiểu dữ liệu người dùng tự định nghĩa -> là bản thiết kế của object.  
**Class** gồm có thuộc tính và phương thức. Phương thức của class có 2 kiểu khai báo: khái báo trong class và ngoài class.  
Khi định nghĩa class sẽ không cấp bộ nhớ -> khởi tạo object mới cung cấp bộ nhớ.  
Khi khai báo 1 class ta cần chú ý:  
- Khai báo private: đối với các properties khi ta muốn đảm bảo an toàn dữ liệu, không muốn ngoài class được sử dụng  
- Khai báo public: đối với các method, được gọi và sử dũng bên ngoài class  
- Khai báo protected : Đối với các thành viên mà ta muốn nó được phép truy cập thông qua các lớp con kế thừa từ lớp gốc  

Khi khai báo 1 class các thành phần của nó sẽ luôn mặc định là private (không thể truy cập từ bên ngoài class thông qua object)  
```  
#include <iostream>  //thư viên C++
using namespace std; // cú pháp cho phép những hàm tiêu chuẩn như cout, cin 
class Person{
  //giới hạn quyền truy cập bên ngoài class
  private:
    string name;
    int age;
  public:
    void setName(string _name){
        name = _name;
    }
    void setAge(int _age){
        age = _age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Person person1; //tạo ra 1 object từ class 
    //truy cập gián tiếp các property trong qua method 
    person1.setName("Pham Cao duy");
    person1.setAge(17);
    //in ra thong tin
    cout << "name: " << person1.getName << endl;
    cout << "age: " << person1.getAge << endl;
    return 0;
}
```  
**Object** là 1 thực thể được khởi tạo từ 1 class -> khởi tạo giá trị cho thuộc tính và hoạt động của các 	phương thức.    
**Static object** tạo object trong class sử dung biến static hoặc con trỏ để khai báo.  
## Constructor & Destructor
- Constructor: Hàm khởi tạo khi khởi tạo 1 object từ class thì hàm này sẽ được gọi, hàm khởi tạo trùng tên với class và không có kiểu trả về. Có thể có nhiều constructor  
    - Default constructor: không có tham số truyền vào
    - constructor: có tham số truyền vào
- Destructor: Hàm hủy khi kết thúc chương trình thì hàm sẽ được gọi, có tên trùng với class thêm dấu ~ vào đầu và không có kiểu trả về. Chỉ có 1 descontructor  
    - Giải phóng các properties
    - Giải phóng các constructor theo cơ chế LIFO
```  
class car {
    car(){} // Hàm tạo default
    car(string type, string color){
        this.type = type;
        this.color = color;
    } // Hàm tạo 
    ~car() {} //Hàm hủy
public:
    string color;
    string type;
}
```  
```
class Person{
  private:
    string name;
    int age;
  public:
    Person(string _name , int _age){
        name = _name;
        age = _age;
    }
    ~Person(){
          cout << "constructor:  " << name << " has been released" << endl;
    }
};
int main(){
    Person person1("Pham Cao Duy ",24);
    Person person2("Dinh Anh Tuan ",29);
    Person person3("Trinh Le Hoang ",29);
}
```  
- kết quả của chương trình trên  
    ```  
    constructor: Trinh Le Hoang has been released
    constructor: Dinh Anh Tuan has been released
    constructor: Pham Cao Duy has been released
    ```  
## Inline function  
- Từ khóa inline được dùng để thông báo đển compiler biết được là nội dung bên trong hàm sẽ được thay thế trực tiếp thay vì xử lý như cách thông thường mỗi khi 1 hàm được gọi đó là địa chỉ của nó sẽ phải được lưu vào trong main stack pointer trước sau đó mói nhảy đến nội dung trong hàm để thực  

Ưu điểm và nhược điểm:  
- Thích hợp cho những hàm được gọi nhiều lần
- Tối ưu hóa những hàm có logic đơn giản (tính toán, các method getter/setter trong class)
- Không thích hợp cho những hàm xử lý phức tạp (chứa vòng lặp, điều kiện)
- Không hỗ trợ xử lý đệ quy
- Dễ dàng bảo trì mã nguồn  

So sánh với macro:  
- Kiểm tra kiểu dữ liệu: inline function kiểm tra tham số tại thời điểm biên dịch, còn macro thì không
- Inline function không gây lỗi biên dịch khó hiểu: Macro có thể gây ra lỗi khó debug
- Inline function hỗ trợ debug tốt hơn: được hiển thị trong stack trace,còn macro thì không  
```  
// Macro
#define SQUARE(x) ((x) * (x))

//inline
inline int square(int x) { return x * x; }

int main(){

    int result = SQUARE(1 + 2); // Lỗi: ((1 + 2) * (1 + 2)) = 1 + 4 + 4 = 9

    int result = square(1 + 2); // Kết quả chính xác: 9

}
```  