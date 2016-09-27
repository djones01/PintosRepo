#include <stdio.h>

struct files {
	int junk;
	int newstuff;
} file;

int main() {
	int j;
	printf("Hello");
	char line[256];
	int i;
	if (fgets(line, sizeof(line), stdin)) {
		if (1 == sscanf_s(line, "%d", &i)) {
			/* i can be safely used */
		}
	}
	struct files *info;
	info->newstuff = bleh;
}