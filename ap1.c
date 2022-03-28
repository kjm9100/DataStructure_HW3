#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    int list[5];
    int *plist[5] = {NULL,}; // 포인터 배열을 NULL로 초기화 및 선언

    // 포인터 배열 plist의 0번 요소에 int형 크기의 메모리 할당 후 주소값(포인터) 반환
    plist[0] = (int *)malloc(sizeof(int)); 

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    /* list[0]의 값은 위에서 할당한 대로 1이 출력된다.
    &list[0]과 list, 그리고 &list는 모두 주소값을 갖고
     같은 값을 의미하기 때문에 동일한 주소값이 출력된다. */
    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0] = %p\n", &list[0]);
    printf("value of list = %p\n", list);
    printf("address of list (&list) = %p\n", &list);

    /* list[1]값은 할당한 대로 100이 출력된다.
     &list[1]과 list+1은 모두 같은 값을 갖는다.
     &list[1]은 1번 요소의 주소값을 나타내고,
     list+1은 list의 값, 즉 &list[0]에서 
     +1*sizeof(int)한 메모리 영역의 주소값을 나타낸다.
     다시 말해, 배열이므로 &list[1]값과 같은 것이다.
     그렇기 때문에 list+1과 &list[1]은 같은 주소값을 갖고,
     이를 참조한 값인 *(list+1)과 list[1]은 같은 값이 100을 갖는다. */
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));
    printf("address of list+1 = %p\n", list+1);


    /* 포인터 배열의 요소 plist[0]을 참조한 값(*plist[0])는 위에서 할당한 것처럼
    200이 출력된다. 포인터 배열인 plist의 값은 배열의 첫 시작주소인 &plist[0]와 같고,
    &plist의 값 또한 배열의 주소이기에 같다. 그렇기 때문에 &plist[0], &plist, plist의
    값은 모두 동일한 주소값이 출력된다. */
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);
    
    /*
    plist[0]의 값은 앞에서 할당받은 int형 크기의 메모리 주소로, 출력하면
    할당받은 해당 메모리의 주소가 출력된다. 하지만 plist[0]을 제외한
    plist 배열의 다른 요소들은 처음에 NULL값으로 초기화했기 때문에
    NULL을 의미하는 0이 출력된다. */
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    //할당받아 사용하던 plist[0] 메모리 영역을 해제한다.
    free(plist[0]);

    return 0;
}
