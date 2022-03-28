#include <stdio.h>
#define MAX_SIZE 100   
// ��ũ�� �����, ������ �� MAX_SIZE�� ��� 100���� ġȯ�ȴ�.


float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- [������] [2021041068] -----]\n\n");

    // �迭 input�� i�� ��ҿ� i���� �Ҵ��Ѵ�.
    for(i=0; i < MAX_SIZE; i++)
    input[i] = i;
   
   /* �迭 input�� ���� �迭�� ù �����ּҰ��� &input[0]�� ����,
   ���ÿ� &input�� �����ϴ�. �׷��� ������ input�� �ּҰ��� input��
   ����ص� ���� ���� ��µȴ�. */
    printf("address of input = %p\n", input);

    /* �迭 input�� �迭�� ũ�⸦ �Ѱ��ְ� �迭 input�� ��Ұ���
    ��� ���� ��, ������� answer�� �Ҵ��Ѵ�. */
    answer = sum(input, MAX_SIZE);

    // answer���� �Ǽ� �������� ����� ������� Ȯ���Ѵ�.
    printf("The sum is: %f\n", answer);

    return 0;
}

float sum(float list[], int n)
{
    /* list��� �Ű������� �Ѱܹ޴� ���� �迭�� �ּҰ��̴�.
    �׷��⿡ list�� ���� list�� ����� �ּҰ��� input�� ���� ������,
    list��� �Ű������� �ּҰ��� list�� ���� �ٸ���.*/
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);

    int i;
    float tempsum = 0;

    /* list�� i�� ����� ���� ��� tempsum�� ���ϴ� �ڵ��̴�.
    ���⼭�� ������ ���� ȣ��(call by reference)�� �Ͼ��.
    ���� �Ű����� n�� ���� �޾ƿ� ���� ���� ���� ȣ��(call by value)�̴�. */
    for(i = 0; i < n; i++)
    tempsum += list[i];

    /* �迭 list�� ��� ��Ҹ� ���� ���� tempsum�� �����Ѵ�. */
    return tempsum;
}