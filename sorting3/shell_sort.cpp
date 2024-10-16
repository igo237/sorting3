template <typename T> void ShellSort(T* A, int n) {
	int h = n;
	T r;
	while (h >= 1) {
		h = h / 2;
		for (int i = 0; i < n; i++) {
			int j = i + h;
			if (j >= n) {
				break;
			}
			if (A[i] > A[j]) {
				r = A[j];
				A[j] = A[i];
				A[i] = r;
			}
		}
	}
}