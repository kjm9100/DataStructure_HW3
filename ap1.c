#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [������] [2021041068] -----]\n\n");

    int list[5];
    int *plist[5] = {NULL,}; // ������ �迭�� NULL�� �ʱ�ȭ �� ����

    // ������ �迭 plist�� 0�� ��ҿ� int�� ũ���� �޸� �Ҵ� �� �ּҰ�(������) ��ȯ
    plist[0] = (int *)malloc(sizeof(int)); 

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    /* list[0]�� ���� ������ �Ҵ��� ��� 1�� ��µȴ�.
    &list[0]�� list, �׸��� &list�� ��� �ּҰ��� ����
     ���� ���� �ǹ��ϱ� ������ ������ �ּҰ��� ��µȴ�. */
    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0] = %p\n", &list[0]);
    printf("value of list = %p\n", list);
    printf("address of list (&list) = %p\n", &list);

    /* list[1]���� �Ҵ��� ��� 100�� ��µȴ�.
     &list[1]�� list+1�� ��� ���� ���� ���´�.
     &list[1]�� 1�� ����� �ּҰ��� ��Ÿ����,
     list+1�� list�� ��, �� &list[0]���� 
     +1*sizeof(int)�� �޸� ������ �ּҰ��� ��Ÿ����.
     �ٽ� ����, �迭�̹Ƿ� &list[1]���� ���� ���̴�.
     �׷��� ������ list+1�� &list[1]�� ���� �ּҰ��� ����,
     �̸� ������ ���� *(list+1)�� list[1]�� ���� ���� 100�� ���´�. */
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));
    printf("address of list+1 = %p\n", list+1);


    /* ������ �迭�� ��� plist[0]�� ������ ��(*plist[0])�� ������ �Ҵ��� ��ó��
    200�� ��µȴ�. ������ �迭�� plist�� ���� �迭�� ù �����ּ��� &plist[0]�� ����,
    &plist�� �� ���� �迭�� �ּ��̱⿡ ����. �׷��� ������ &plist[0], &plist, plist��
    ���� ��� ������ �ּҰ��� ��µȴ�. */
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);
    
    /*
    plist[0]�� ���� �տ��� �Ҵ���� int�� ũ���� �޸� �ּҷ�, ����ϸ�
    �Ҵ���� �ش� �޸��� �ּҰ� ��µȴ�. ������ plist[0]�� ������
    plist �迭�� �ٸ� ��ҵ��� ó���� NULL������ �ʱ�ȭ�߱� ������
    NULL�� �ǹ��ϴ� 0�� ��µȴ�. */
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    //�Ҵ�޾� ����ϴ� plist[0] �޸� ������ �����Ѵ�.
    free(plist[0]);

    return 0;
}
