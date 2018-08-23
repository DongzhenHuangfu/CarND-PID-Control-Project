# Reflection for PID controller

## Understandness of each term

### P term

P term is the coefficient of the error cte, with increasing cte, the control term of P will increase proportionally.

### I term

I term is the coefficient of the intergral of error cte, which means, if the car stay on the one side of the reference, this term will increase so that the steering angle will increase and the car will go back to the reference.

This term is used for the situation, where there may be some system errors.

### D term

D term is the coefficient of the difference between the new cte and the last one, this term will help to reduce the vibrate.

## Choose for the term

Here I tuned the parameters manual, I first set the I and D term as 0, and found a relative stable P, after that I started tuning the D term, trying to eliminate the vibrate, finally, I tuned the I parameter, to make sure that the car are driving savely.