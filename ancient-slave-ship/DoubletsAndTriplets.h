
typedef union {
	double xy[2];
	struct {
		double x, y;
	};
} Doublet;

typedef union {
	double xyz[3];
	struct {
		double x, y, z;
	};
} Triplet;