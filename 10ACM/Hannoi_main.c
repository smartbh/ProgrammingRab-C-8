#include <stdio.h>

// ž�� ��� ������ �ִ��� ����
int nplates[3];
// � ���ǵ��� �ִ��� ����
// ž�� ���� ���¸� ǥ���Ѵ�.
int tower[3][100];
void print_tower()
{
	// tower[][] ������ �����ش�
	// ...
	printf("\n");
	printf("���� Enter : ");
	getchar(); // getchar() �� ��� ����Ѵ�.
	fflush(stdin);
}
// �ϳ��� ������ �̵��� �� ���� ��ü ž�� ���� ���¸� �����ϰ� ž�� ������ ǥ��.
void move_one(int n, char from, char to)
{
	printf("\n���� %d�� %c���� %c�� �ű��.\n",
		n, from, to);
	// nplates[] �� tower[][] ������ �����Ѵ�
	// from ������ ���� ���� ������ ����
	// to ���� ���� ���� ������ �߰��ϰ�
	// nplates[] ���� ����/���� �Ѵ�.
	// �̵��� �߻��� �� ���� print_tower() ȣ��
	print_tower();
}
// Ÿ�������� �ʱ�ȭ �Ѵ�.
// start ��ġ�� n���� ����(1~n)�� �ִ�.
void init_tower(int n, char start)
{
	int i, tower_no;
	//ž�� ��ȣ A, B, C -> 0, 1, 2
	tower_no = start - 'A';
	// tower[][] ����� nplates[]�� �ʱ�ȭ �Ѵ�.
	// tower[0][0]~[0][3] = 4, 3, 2, 1 ������
	// nplates[] �� ������ ���� ����Ų��..
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("���� 1�� %c ���� %c���� �ű��.\n", from, to);
	else {
		// 1 ~ n-1 �� �ӽ� ��ҿ� �̵�
		hanoi_tower(n - 1, from, to, tmp);
		// ���� �ؿ� �ִ� ������ �̵�
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		// 1 ~ n-1 �� �ӽ� ��ҿ��� �������� �̵�
		hanoi_tower(n - 1, tmp, from, to);
	}
}

void main() {
	hanoi_tower(4, 'A', 'B', 'C');
}