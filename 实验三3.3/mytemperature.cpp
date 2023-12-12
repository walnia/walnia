#include"1.cpp"
double celsius_to_fah(double cel) {
	double fah;
	fah = cel * 9 / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel;
	cel = 5.0/ 9.0 * (fah - 32);
	return cel;
}