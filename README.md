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
khi định nghĩa class sẽ không cấp bộ nhớ -> khởi tạo object mới cung cấp bộ nhớ.  
Khi khai báo 1 class ta cần chú ý:  
- Khai báo private: đối với các properties khi ta muốn đảm bảo an toàn dữ liệu, không muốn ngoài class được sử dụng  
- Khai báo public: đối với các method, được gọi và sử dũng bên ngoài class  
- Khai báo protected : Đối với các thành viên mà ta muốn nó được phép truy cập thông qua các lớp con kế thừa từ lớp gốc  

Khi khai báo 1 class các thành phần của nó sẽ luôn mặc định là private (không thể truy cập từ bên ngoài class thông qua object)  
**Object** là 1 thực thể được khởi tạo từ 1 class -> khởi tạo giá trị cho thuộc tính và hoạt động của các 	phương thức.    
**Static object** tạo object trong class sử dung biến static hoặc con trỏ để khai báo.  
## Constructor & Destructor
