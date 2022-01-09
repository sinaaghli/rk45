#ifndef RK45_H__
#define RK45_H__

#include <rk45/version.h>

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

//    R4_ABS returns the absolute value of an R4.
float r4_abs(float x);
//    R4_EPSILON returns the R4 roundoff unit.
float r4_epsilon();
//    R4_FEHL takes one Fehlberg fourth-fifth order step.
void r4_fehl(void f(float t, float y[], float yp[]), int neqn, float y[],
             float t, float h, float yp[], float f1[], float f2[], float f3[],
             float f4[], float f5[], float s[]);
//    R4_MAX returns the maximum of two R4's.
float r4_max(float x, float y);
//    R4_MIN returns the minimum of two R4's.
float r4_min(float x, float y);
//    R4_RKF45 carries out the Runge-Kutta-Fehlberg method.
int r4_rkf45(void f(float t, float y[], float yp[]), int neqn, float y[],
             float yp[], float *t, float tout, float *relerr, float abserr,
             int flag);
//    R4_SIGN returns the sign of an R4.
float r4_sign(float x);

//    R8_ABS returns the absolute value of an R8.
double r8_abs(double x);
//    R8_EPSILON returns the R8 roundoff unit.
double r8_epsilon();
//    R8_FEHL takes one Fehlberg fourth-fifth order step.
void r8_fehl(void f(double t, double y[], double yp[]), int neqn, double y[],
             double t, double h, double yp[], double f1[], double f2[],
             double f3[], double f4[], double f5[], double s[]);
//    R8_MAX returns the maximum of two R8's.
double r8_max(double x, double y);
//    R8_MIN returns the minimum of two R8's.
double r8_min(double x, double y);
//    R8_RKF45 carries out the Runge-Kutta-Fehlberg method.
int r8_rkf45(void f(double t, double y[], double yp[]), int neqn, double y[],
             double yp[], double *t, double tout, double *relerr, double abserr,
             int flag);
//    R8_SIGN returns the sign of an R8.
double r8_sign(double x);
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
void timestamp();

#endif // RK45_H__