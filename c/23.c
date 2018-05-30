#include <stdio.h>

struct complex_struct {
	double x, y;
} ;

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2) {
	z1.x = z1.x + z2.x;
	z1.y = z1.y + z2.y;
	return z1;
};

int main(int argc, char *argv[])
{
	struct complex_struct z = {3.0, 4.0};
	struct complex_struct m = {6, 7};
	z = add_complex(z, z);
	m = add_complex(m, m);
	printf("%f %f\n", z.x, z.y);
	printf("%f %f\n", m.x, m.y);
	return 0;
}