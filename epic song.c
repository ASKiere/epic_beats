#include <stdio.h>
#include <windows.h>
int main() {
	printf("HE CODED A WHOLE SONG IN C? HOW!?!");
	Sleep(500);
	int i;
	int j;
	int k;
	int n;
	int a;
	int fj = 340;
	for (a = 0; a < 2; a++) {
		for (i = 0; i < 2; i++) {
			Beep(400, 250);
			Sleep(100);
			Beep(489, 1050);
			Sleep(45);
			Beep(421, 250);
			Beep(300, 100);
			Beep(345, 250);
			Sleep(200);
		}
		Beep(370, 250);
		for (j = 0; j < 2; j++) {
			Beep(fj, 50);
			Sleep(75);
			Beep(fj, 50);
			Beep(fj, 50);
			Sleep(75);
			Beep(fj, 50);
			Sleep(100);
			Beep(450, 1000);
		}
		for (k = 0; k < 2; k++) {
			Beep(450, 100);
			Beep(450, 100);
			Beep(555, 1000);
			Beep(300, 100);
			Sleep(200);
			Beep(250, 200);
			Sleep(150);
		}
		Beep(300, 123);
		Sleep(400);
		Beep(300, 123);
		Sleep(300);
		Beep(500, 1500);
		Sleep(500);
	}
	Sleep(50);
	printf("\nThank you for listening! you can exit the program now.");
	Sleep(10000);
	return 0;
	//wow you actually looked through the source code, hi :)
}