#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   struct Employees {       /* 宣告員工資料的結構 */ 
      char name[10];        /* 姓名 */ 
      int age;              /* 年齡 */ 
      float salary;         /* 薪水 */ 
      char email[20];       /* 電子郵件地址 */ 
   };
   struct Employees employees;   //結構變數的宣告 
   char text[20];

   system("CLS"); /* 清除螢幕 */
   printf("\n\n 本程式由 劉禹寬 設計\n\n"); /* 宣告程式設計者 */                     /* 顯示題目內容 */

   /* 輸入並儲存員工資料於結構變數中 */
      printf("請輸入員工姓名 ==> ");
      scanf("%s", &text); /* 讀取員工姓名 */
      strcpy(employees.name, text); /* 儲存員工姓名 */
      printf("請輸入員工年齡 ==> ");
      scanf("%d",&employees.age); /* 讀取並儲存員工年齡 */
      printf("請輸入員工薪水 ==> "); 
      scanf("%f",&employees.salary); /* 讀取並儲存員工薪水 */
      printf("請輸入員工電子郵件地址 ==> ");
      scanf("%s", &text); /* 讀取員工子郵件地址 */
      strcpy(employees.email, text); /* 儲存員工子郵件地址 */

   /* 顯示員工資料 */
   printf("\n\n員工資料:\n");
   printf("----------------------------------------\n"); 
   printf("員工姓名: %s\n", employees.name);
   printf("員工年齡: %d\n", employees.age);
   printf("員工薪水: %f\n", employees.salary);
   printf("員工電子郵件地址: %s\n", employees.email);
   printf("----------------------------------------\n\n"); 

   system("pause");
   return 0;
}

