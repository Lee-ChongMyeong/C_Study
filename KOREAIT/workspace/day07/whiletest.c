#include <stdio.h>

void main() {
	// 이름을 4번 출력하기
	int cnt = 0;
	while (1) {
		cnt++;
		printf("%d.한동석\n",cnt);
		if (cnt == 4) break;
	}

}