#include <stdio.h>

/* student 구조체의 크기
    = 자료들의 크기의 합
    = char형 배열의 크기(13 bytes)
    + int형 변수의 크기(4bytes) 
    + short형 변수의 크기(2bytes)
    = 19(bytes)
*/
struct student {
    char lastName[13];
    // pad[3]
    int studentId;
    short grade;
    // pad[2]
};

int main()
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    /* typedef를 이용해 구조체를 선언한 것이 아니기 때문에
     struct를 반드시 써줘야 한다. */
    struct student pst;

    /* student 구조체의 크기를 확인하는 코드이다.
    원래는 student 구조체의 크기는 구조체 안에 있는 멤버들의 크기의 합으로,
    19바이트가 출력돼야 하지만, 실제 출력해보면 24바이트가 출력되는 것을
    확인할 수 있다. 그 이유는 padding에서 찾을 수 있다. padding을 통해
    구조체를 메모리에 할당할 때, char형 배열 뒤에 pad를 3바이트,
    short형 변수 뒤에 pad를 2바이트를 넣기 때문이다. 그래서
    19바이트 + 5바이트가 되어 24바이트가 출력되는 것이다. */
    printf("size of student = %ld\n", sizeof(struct student));
    
    /* int형의 크기를 확인하는 코드이다.
    int형의 크기는 4바이트이기 때문에 4바이트가 출력된다. */
    printf("size of int = %ld\n", sizeof(int));

    /* short형의 크기를 확인하는 코드이다.
    short형의 크기는 2바이트이기 때문에 2바이트가 출력된다. */
    printf("size of short = %ld\n", sizeof(short));
    
    return 0;
}