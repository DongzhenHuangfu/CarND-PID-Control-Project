#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double _Kp, double _Ki, double _Kd) {

	Kp = _Kp;
	Ki = _Ki;
	Kd = _Kd;
	i_error = 0;
}

void PID::UpdateError(double cte) {

	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {

	double steer_value = - Kp * p_error - Ki * i_error - Kd * d_error;
	if(steer_value < -1){
		steer_value = -1;
	}
    
    else if(steer_value > 1){
      steer_value = 1;
    }
	return steer_value; 
}

