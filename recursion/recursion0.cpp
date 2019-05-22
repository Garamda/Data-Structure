#include <cstdio>
int BinarySearchTree(int arr[], int first, int last, int target);

int main() {

	int toBeSearched[10] = { 1,2,5,10,15,26,27,58,69,100 };
	int first = 0, last = 9, target;
	printf("�迭 �ȿ� �ִ��� Ȯ���ϰ� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &target);
	// first, last�� array idx�̴�. array element�� ���� ���� �ƴϴ�. 

	int ans = BinarySearchTree(toBeSearched, first, last, target);
	printf("%d", ans);
	return 0;
}

int BinarySearchTree(int arr[], int first, int last, int target) {

	if (first > last) return -1; // first�� last���� ũ�ٴ� ���� Ž���� ���������� �ǹ���
	int mid = (first + last) / 2;

	if (arr[mid] == target) return mid; // ��, target�� idx�� return�Ѵ�. ("�迭 �ȿ��� �� ��°�� ��ġ�Ѵ�")

	if (target > arr[mid]) first = mid + 1;
	else if (target < arr[mid]) last = mid - 1;

	return BinarySearchTree(arr, first, last, target);
}