#include <stdio.h>

/* student ����ü�� ũ��
    = �ڷ���� ũ���� ��
    = char�� �迭�� ũ��(13 bytes)
    + int�� ������ ũ��(4bytes) 
    + short�� ������ ũ��(2bytes)
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
    printf("[----- [������] [2021041068] -----]\n\n");

    /* typedef�� �̿��� ����ü�� ������ ���� �ƴϱ� ������
     struct�� �ݵ�� ����� �Ѵ�. */
    struct student pst;

    /* student ����ü�� ũ�⸦ Ȯ���ϴ� �ڵ��̴�.
    ������ student ����ü�� ũ��� ����ü �ȿ� �ִ� ������� ũ���� ������,
    19����Ʈ�� ��µž� ������, ���� ����غ��� 24����Ʈ�� ��µǴ� ����
    Ȯ���� �� �ִ�. �� ������ padding���� ã�� �� �ִ�. padding�� ����
    ����ü�� �޸𸮿� �Ҵ��� ��, char�� �迭 �ڿ� pad�� 3����Ʈ,
    short�� ���� �ڿ� pad�� 2����Ʈ�� �ֱ� �����̴�. �׷���
    19����Ʈ + 5����Ʈ�� �Ǿ� 24����Ʈ�� ��µǴ� ���̴�. */
    printf("size of student = %ld\n", sizeof(struct student));
    
    /* int���� ũ�⸦ Ȯ���ϴ� �ڵ��̴�.
    int���� ũ��� 4����Ʈ�̱� ������ 4����Ʈ�� ��µȴ�. */
    printf("size of int = %ld\n", sizeof(int));

    /* short���� ũ�⸦ Ȯ���ϴ� �ڵ��̴�.
    short���� ũ��� 2����Ʈ�̱� ������ 2����Ʈ�� ��µȴ�. */
    printf("size of short = %ld\n", sizeof(short));
    
    return 0;
}