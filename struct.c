#include <stdio.h>

// typedef를 이용하지 않았기에 선언할 때 struct 표기 필요
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

// typedef를 이용했기에 선언할 때 struct 표기 불필요
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() 
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'};
    
    /* student1 구조체형 변수 st1의 멤버에 접근해 멤버를 출력해 확인 */
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};

    /* student2 구조체형 변수 st2의 멤버에 접근해 멤버를 출력해 확인 */
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    // student2 구조체형 변수 st3를 선언
    student2 st3;

    //st2를 st3에 복사
    st3 = st2;

    /* st2가 st3에 복사가 됐는지 확인하기 위해 st3의 멤버를 접근해 출력 */
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* 아래의 코드가 있을 경우, == 연산에 유효하지 않은 피연산자라면서 빌드가 불가능하다. 
     이는 구조체를 비교할 때는 구조체형 변수 자체로는 ==연산을 사용할 수 없음을 의미한다.
     그렇기 때문에 빌드를 하려면 아래 코드를 주석처리하거나 각각 멤버를 비교해야 한다. */
    if(st3 == st2) 
    printf("equal\n");
    else
    printf("not equal\n");
    
    return 0;
}