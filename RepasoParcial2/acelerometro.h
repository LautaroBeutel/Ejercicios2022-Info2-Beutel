#ifndef _ACELEROMETRO_H_
#define _ACELEROMETRO_H_

class acelerometro{
	private:
		double vx, vy, vz;
		double gx, gy, gz;
	public:
		acelerometro(double gx, double gy, double gz);

		void getter();
		void getGravity(double, double, double);
};

#endif
