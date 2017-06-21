#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;


struct Solution {
    double steering_angle;
    double throttle;
    vector<double> y_vals;
    vector<double> x_vals;

    Solution(double delta, double ac): steering_angle(delta), throttle(ac) {};
};

class MPC {
 public:
  MPC();
  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  Solution Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};


#endif /* MPC_H */
