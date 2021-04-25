#include <stdio.h>
#include <string.h>

struct Person {                    // 구조체 person의 선언
	char  name[10];
    int     age;
    float  salary;
};

void main()
{
   struct Person person1;                 // 구조체 변수 person1의 선언
   strcpy(person1.name, "james");         //strcpy 함수를 사용한 문자열 저장
   person1.age = 10;                      //person.age에 값 저장
   person1.salary = 35000;                //person.salary에 값 저장
	
   printf("%s %d %f\n",person1.name, person1.age, person1.salary);
}


