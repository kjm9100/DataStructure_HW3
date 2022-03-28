#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [������] [2021041068] -----]\n\n");

    int list[5]; 
    int *plist[5]; // ������ �迭

    list[0] = 10;
    list[1] = 11;

    /* ������ �����ϱ� ���� �޸𸮸� �Ҵ�ް�, �� �޸� �ּҸ�
    ������ �迭�� 0�� ��ҿ� �����ϴ� �ڵ��̴�. */
    plist[0] = (int*)malloc(sizeof(int)); 

    /* int���� �����ϱ� ���� �迭 list�� 0�� ��ҿ� 10�� �Ҵ��߱� ������
    list[0]�� ��, 10�� ��µȴ�. */
    printf("list[0] \t= %d\n", list[0]);

    /* �迭 list�� ���� list[0]�� �ּҰ��� &list[0], �׸��� list+0�� ����
    ���ϱ� ���� ����ϴ� �ڵ��̴�. ����غ��� ���� ���ٴ� ���� Ȯ���� �� �ִ�.
    �ֳ��ϸ� �迭�� �̸��� list�� �迭�� ù �����ּҰ�����, &list[0]�� ���� �����̴�.
    �׸��� &list[0]�� ������ �迭�� list�� 0�� ����� �ּҰ��̹Ƿ� ����, list+0��
    list+0*sizeof(int)�� ������ �ǹ̸� ���� ǥ���̱⿡ list�� ���� ���� ���´�. */
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);
    printf("address of list + 0 \t= %p\n", list+0);

    /* ���� list+0�� ������ �ƶ�����, list + 1(2,3,4)��
    list + 1(2,3,4)*sizeof(int)�� �ǹ̷�, list+0�� �ּҰ�����
    4(8,12,16)����Ʈ �ڿ� �ִ� �޸��� �ּҰ��� ��µȴٴ� ���� �� �� �ִ�. */
    printf("address of list + 1 \t= %p\n", list+1);
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);

    /* list[4]�� �ּҰ��� list+4�� ���� ������ list+4�� ���ٴ� ���� Ȯ���� �� �ִ�.
    �迭 ����� �ּҰ��� �Ͱ� list�κ��� ����� ��ġ�� ���� �ּҰ��� ���� ���̶�� �� �� �ִ�. */
    printf("address of list[4] \t= %p\n", &list[4]);

    // ������ ������ �迭 plist�� 0�� ��ҿ� ���� �Ҵ��� �޸𸮸� ������Ű�� �ڵ��̴�.
    free(plist[0]);

    return 0;
}