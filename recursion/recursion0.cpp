#include <cstdio>
int BinarySearchTree(int arr[], int first, int last, int target);

int main() {

	int toBeSearched[10] = { 1,2,5,10,15,26,27,58,69,100 };
	int first = 0, last = 9, target;
	printf("배열 안에 있는지 확인하고 싶은 숫자를 입력하세요 : ");
	scanf("%d", &target);
	// first, last는 array idx이다. array element의 실제 값이 아니다. 

	int ans = BinarySearchTree(toBeSearched, first, last, target);
	printf("%d", ans);
	return 0;
}

int BinarySearchTree(int arr[], int first, int last, int target) {

	if (first > last) return -1; // first가 last보다 크다는 것은 탐색이 실패했음을 의미함
	int mid = (first + last) / 2;

	if (arr[mid] == target) return mid; // 즉, target의 idx를 return한다. ("배열 안에서 몇 번째에 위치한다")

	if (target > arr[mid]) first = mid + 1;
	else if (target < arr[mid]) last = mid - 1;

	return BinarySearchTree(arr, first, last, target);
}