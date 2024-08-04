#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
1085_직사각형에서 탈출
1112KB	0ms
*/
#include <cstdio>

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	int min = x;
	if (y < min) min = y;
	if (w - x < min) min = w - x;
	if (h - y < min) min = h - y;

	printf("%d\n", min);
	return 0;
}