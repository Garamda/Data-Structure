#include <cstdio>
void HanoiTowerMove(int n, char from, char by, char to);

int main() {
	int n;
	printf("원반의 갯수를 입력하세요 : ");
	scanf("%d", &n);
	char from = 'A', by = 'B', to = 'C';
	HanoiTowerMove(n, from, by, to);
	return 0;
}

// from에 꽂힌 n개의 원반을 by를 거쳐서 to로 이동
void HanoiTowerMove(int n, char from, char by, char to) {
	if (n == 1) {
		printf("원반 1 : %c -> %c\n", from, to);
	}
	else {
		HanoiTowerMove(n - 1, from, to, by);
		printf("원반 %d : %c -> %c\n", n, from, to);
		HanoiTowerMove(n - 1, by, from, to);
	}
}