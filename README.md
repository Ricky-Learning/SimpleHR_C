# SimpleHR_C

Using a C language struct to manage employee information. The program allows users to input an employee’s name, age, salary, and email, which are then stored in a struct called "Employees." Afterward, the program displays the entered details.

### 🔹 這段程式在做什麼？  
這是一個 **C 語言結構 (struct)** 的應用範例，程式用來 **儲存和顯示員工資料**。當使用者輸入一名員工的 **姓名、年齡、薪水** 和 **電子郵件**，程式會將這些資訊儲存到結構 (`struct Employees`) 中，然後再顯示出來。  

---

### 🔹 這段程式是怎麼運作的？  
1. **定義 `struct Employees` 結構**：  
   - `name[10]`：字串，存放員工姓名（最多 9 個字元 + `\0`）  
   - `age`：整數，存放員工年齡  
   - `salary`：浮點數，存放員工薪水  
   - `email[20]`：字串，存放員工電子郵件（最多 19 個字元 + `\0`）  

2. **建立 `employees` 變數**：用來儲存單一員工的資訊。  

3. **使用者輸入員工資料**：  
   - 使用 `scanf("%s", &text);` 讀取 **姓名** 和 **電子郵件**，並用 `strcpy()` 存到 `employees` 結構中。  
   - 使用 `scanf("%d", &employees.age);` 讀取 **年齡**，直接存入 `employees.age`。  
   - 使用 `scanf("%f", &employees.salary);` 讀取 **薪水**，直接存入 `employees.salary`。  

4. **輸出結果**：程式會整理輸入的資訊，並顯示完整的員工資料。  
