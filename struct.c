#include <stdio.h>

// typedef�� �̿����� �ʾұ⿡ ������ �� struct ǥ�� �ʿ�
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

// typedef�� �̿��߱⿡ ������ �� struct ǥ�� ���ʿ�
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() 
{
    printf("[----- [������] [2021041068] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'};
    
    /* student1 ����ü�� ���� st1�� ����� ������ ����� ����� Ȯ�� */
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};

    /* student2 ����ü�� ���� st2�� ����� ������ ����� ����� Ȯ�� */
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    // student2 ����ü�� ���� st3�� ����
    student2 st3;

    //st2�� st3�� ����
    st3 = st2;

    /* st2�� st3�� ���簡 �ƴ��� Ȯ���ϱ� ���� st3�� ����� ������ ��� */
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* �Ʒ��� �ڵ尡 ���� ���, == ���꿡 ��ȿ���� ���� �ǿ����ڶ�鼭 ���尡 �Ұ����ϴ�. 
     �̴� ����ü�� ���� ���� ����ü�� ���� ��ü�δ� ==������ ����� �� ������ �ǹ��Ѵ�.
     �׷��� ������ ���带 �Ϸ��� �Ʒ� �ڵ带 �ּ�ó���ϰų� ���� ����� ���ؾ� �Ѵ�. */
    if(st3 == st2) 
    printf("equal\n");
    else
    printf("not equal\n");
    
    return 0;
}