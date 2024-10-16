template <typename T> int QuickSort(T A [100], int n, int start, int end, int c)
{
    T replace;
    int i = 0;
    int j = start + 1;
    int flag = 0;
    for (i = start + 1; i < end; i++) {
        if (A[start] > A[i]) {
            replace = A[i];
            A[i] = A[j];
            A[j] = replace;
            j++;
            flag = 1;
        }
    }
    if (start == n) {
        return 0;
    }
    if (c == 0) {
        c = j;
    }
    if (flag) {
        replace = A[j - 1];
        A[j - 1] = A[start];
        A[start] = replace;
        QuickSort(A, n, start, j - 1, c);
    }
    else {
        QuickSort(A,n, c, n, 0);
    }
}