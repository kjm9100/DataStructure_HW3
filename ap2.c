#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    int list[5]; 
    int *plist[5]; // 포인터 배열

    list[0] = 10;
    list[1] = 11;

    /* 정수를 저장하기 위한 메모리를 할당받고, 그 메모리 주소를
    포인터 배열의 0번 요소에 저장하는 코드이다. */
    plist[0] = (int*)malloc(sizeof(int)); 

    /* int형을 저장하기 위한 배열 list의 0번 요소에 10을 할당했기 때문에
    list[0]의 값, 10이 출력된다. */
    printf("list[0] \t= %d\n", list[0]);

    /* 배열 list의 값과 list[0]의 주소값인 &list[0], 그리고 list+0의 값을
    비교하기 위해 출력하는 코드이다. 출력해보면 값이 같다는 것을 확인할 수 있다.
    왜냐하면 배열의 이름인 list는 배열의 첫 시작주소값으로, &list[0]와 같기 때문이다.
    그리고 &list[0]는 일차원 배열인 list의 0번 요소의 주소값이므로 같고, list+0은
    list+0*sizeof(int)와 동일한 의미를 갖는 표현이기에 list와 같은 값을 갖는다. */
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);
    printf("address of list + 0 \t= %p\n", list+0);

    /* 위의 list+0과 동일한 맥락으로, list + 1(2,3,4)는
    list + 1(2,3,4)*sizeof(int)의 의미로, list+0의 주소값보다
    4(8,12,16)바이트 뒤에 있는 메모리의 주소값이 출력된다는 것을 알 수 있다. */
    printf("address of list + 1 \t= %p\n", list+1);
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);

    /* list[4]의 주소값은 list+4과 같기 때문에 list+4와 같다는 것을 확인할 수 있다.
    배열 요소의 주소값인 것과 list로부터 상대적 위치에 따른 주소값인 것이 차이라고 할 수 있다. */
    printf("address of list[4] \t= %p\n", &list[4]);

    // 위에서 포인터 배열 plist의 0번 요소에 동적 할당한 메모리를 해제시키는 코드이다.
    free(plist[0]);

    return 0;
}