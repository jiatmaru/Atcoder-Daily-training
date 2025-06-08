#include <stdio.h>

void quicksort(int a[], int first, int last) {
    if (first >= last) return; // 終了条件を追加

    int i = first, j = last;
    int x = a[(first + last) / 2]; // ピボットの選択

    while (i <= j) {
        while (a[i] < x) i++; // 修正: '='を削除
        while (a[j] > x) j--; // 修正: '='を削除
        if (i <= j) { // 修正: '>='を'<='に変更
            int t = a[i]; a[i] = a[j]; a[j] = t;
            i++; j--;
        }
    }

    if (first < j) quicksort(a, first, j);
    if (i < last) quicksort(a, i, last); // 修正: 条件を正確に
}

int main() {
    int arr[] = {3, 2, 6, 8, 5, 1, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quicksort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
