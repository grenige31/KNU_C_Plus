
extern int n1;
extern int n2;
int max(int x, int y) {
	int n_max = 0;
	if (x > y) {
		n_max = x;
	}
	else {
		n_max = y;
	}
	return n_max;
}

int max_np() {
	int n_max = 0;
	if (n1 > n2) {
		n_max = n1;
	}
	else {
		n_max = n2;
	}
	return n_max;
}