#include <stdio.h>
#include <string.h>

//구조체 타입의 선언
typedef struct {
     char  name[10];
     int     age;
     float  salary;
} personType;      	

void main()
{    
	personType  mywife;
     personType  *p = &mywife;

     strcpy(mywife.name, "angela");
     p->age = 30;                 //구조체 포인터에 의한 값 할당

     mywife.salary = 35000;

      printf("%d", p->age);       // 포인터를 사용해서 값 읽어오기
      printf("%f\n", p->salary);  // 포인터를 사용해서 값 읽어오기
}

