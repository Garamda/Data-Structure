#include <cstdio>
void HanoiTowerMove(int n, char from, char by, char to);

int main() {
	int n;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &n);
	char from = 'A', by = 'B', to = 'C';
	HanoiTowerMove(n, from, by, to);
	return 0;
}

// from�� ���� n���� ������ by�� ���ļ� to�� �̵�
void HanoiTowerMove(int n, char from, char by, char to) {
	if (n == 1) {
		printf("���� 1 : %c -> %c\n", from, to);
	}
	else {
		HanoiTowerMove(n - 1, from, to, by);
		printf("���� %d : %c -> %c\n", n, from, to);
		HanoiTowerMove(n - 1, by, from, to);
	}
}