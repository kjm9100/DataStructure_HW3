#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    int one[] = {0, 1, 2, 3, 4};

    /* 배열 이름의 값은 배열의 첫 시작주소값이기에 일차원 배열인 one의 값은
    &one[0], &one과 같다. 그렇기 때문에 같은 주소값이 출력되는 것을 확인할 수 있다. */
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");

    /* one배열의 0번 요소의 주소값과 요소 개수를 넘겨줘서
     통해 배열 one의 모든 요소의 값을 출력해 확인하는 코드이다. */
    print1(&one[0], 5);

    return 0;
}

void print1 (int *ptr, int rows)
{
    int i;

    printf ("Address \t Contents\n");

    /* 주소값을 받아 상대적 위치를 이용해 값을 참조하고
     이를 출력해 확인하는 코드이다. 포인터 매개변수 ptr로
     주소값을 받고, 주소값과 이를 참조한 값을 출력한다.
     즉, 참조를 통한 호출을 의미한다.
     배열의 0번 요소인 one[0]부터 one[4]까지 모두 출력되고,
     이러한 값들에 대응되는 주소값이 출력된다. 주소값을 보면,
     4바이트씩 차이난다는 것을 알 수 있는데, int형 배열이기 때문에
     4바이트 단위로 값을 저장한다는 것을 알 수 있다. */
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
    
}