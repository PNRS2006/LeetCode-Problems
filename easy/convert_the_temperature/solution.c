/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double c, int* r) {
    double* a = (double*)malloc(2*sizeof(double));
    a[0] = c + 273.15;
    a[1] = (c * 1.80) + 32.00;
    *r = 2;
    return a;
}