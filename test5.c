#include <stdio.h>
#include <Windows.h>
WINAPI func2(LPVOID parameter) {
	while (1) {
		printf("Say hello\n");
		Sleep(1100);
	}
}
int main() {
	DWORD ID = 0;
	CreateThread(NULL, 128, func2, NULL,NULL, &ID);
	while (1) {
		printf("Xin chao\n");
		Sleep(1000);
	}
}