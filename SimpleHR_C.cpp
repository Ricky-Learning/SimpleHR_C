#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   struct Employees {       /* �ŧi���u��ƪ����c */ 
      char name[10];        /* �m�W */ 
      int age;              /* �~�� */ 
      float salary;         /* �~�� */ 
      char email[20];       /* �q�l�l��a�} */ 
   };
   struct Employees employees;   //���c�ܼƪ��ŧi 
   char text[20];

   system("CLS"); /* �M���ù� */
   printf("\n\n ���{���� �B��e �]�p\n\n"); /* �ŧi�{���]�p�� */                     /* ����D�ؤ��e */

   /* ��J���x�s���u��Ʃ󵲺c�ܼƤ� */
      printf("�п�J���u�m�W ==> ");
      scanf("%s", &text); /* Ū�����u�m�W */
      strcpy(employees.name, text); /* �x�s���u�m�W */
      printf("�п�J���u�~�� ==> ");
      scanf("%d",&employees.age); /* Ū�����x�s���u�~�� */
      printf("�п�J���u�~�� ==> "); 
      scanf("%f",&employees.salary); /* Ū�����x�s���u�~�� */
      printf("�п�J���u�q�l�l��a�} ==> ");
      scanf("%s", &text); /* Ū�����u�l�l��a�} */
      strcpy(employees.email, text); /* �x�s���u�l�l��a�} */

   /* ��ܭ��u��� */
   printf("\n\n���u���:\n");
   printf("----------------------------------------\n"); 
   printf("���u�m�W: %s\n", employees.name);
   printf("���u�~��: %d\n", employees.age);
   printf("���u�~��: %f\n", employees.salary);
   printf("���u�q�l�l��a�}: %s\n", employees.email);
   printf("----------------------------------------\n\n"); 

   system("pause");
   return 0;
}

