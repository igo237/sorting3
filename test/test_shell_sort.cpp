#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <shell_sort.h>



TEST_CASE()
{

	int N = 5;
	float A1[5] = { 1.2, 6.4, 3.01, 5.8, 8.0 };
	ShellSort(A1, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A1[i] <= A1[i + 1]);
	}

	N = 8;
	int A2[10] = { 10, 33, 79, 19, 80, 100, 24, 92, 66, 41 };
	ShellSort(A2, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A2[i] <= A2[i + 1]);
	}

	N = 8;
	int A3[8] = { 1, 38, 38, 41, 76, 83, 88, 98 };
	ShellSort(A3, N);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A3[i] <= A3[i + 1]);
	}
}