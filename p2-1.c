#include <stdio.h>
#define MAX_SIZE 100   
// 매크로 상수로, 컴파일 시 MAX_SIZE는 모두 100으로 치환된다.


float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- [김지민] [2021041068] -----]\n\n");

    // 배열 input의 i번 요소에 i값을 할당한다.
    for(i=0; i < MAX_SIZE; i++)
    input[i] = i;
   
   /* 배열 input의 값은 배열의 첫 시작주소값인 &input[0]과 같고,
   동시에 &input과 동일하다. 그렇기 때문에 input의 주소값은 input을
   출력해도 같은 값이 출력된다. */
    printf("address of input = %p\n", input);

    /* 배열 input과 배열의 크기를 넘겨주고 배열 input의 요소값을
    모두 더한 뒤, 결과값을 answer에 할당한다. */
    answer = sum(input, MAX_SIZE);

    // answer값을 실수 형식으로 출력해 결과값을 확인한다.
    printf("The sum is: %f\n", answer);

    return 0;
}

float sum(float list[], int n)
{
    /* list라는 매개변수에 넘겨받는 것은 배열의 주소값이다.
    그렇기에 list의 값은 list에 저장된 주소값인 input의 값이 되지만,
    list라는 매개변수의 주소값은 list의 값과 다르다.*/
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);

    int i;
    float tempsum = 0;

    /* list의 i번 요소의 값을 모두 tempsum에 더하는 코드이다.
    여기서도 참조에 의한 호출(call by reference)가 일어난다.
    물론 매개변수 n에 값을 받아올 때는 값에 의한 호출(call by value)이다. */
    for(i = 0; i < n; i++)
    tempsum += list[i];

    /* 배열 list의 모든 요소를 더한 값인 tempsum을 리턴한다. */
    return tempsum;
}