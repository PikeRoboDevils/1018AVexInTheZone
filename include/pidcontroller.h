#ifndef PIDCONTROLLER_H_
#define PIDCONTROLLER_H_

#define PID_RATE false
#define PID_DISPLACEMENT true

class PIDController {
    private:
        double kP;
        double kI;
        double kD;
        double kF;

        double maximumOutput = 127.0;
        double minimumOutput = -127.0;
        double maximumInput = 0.0;
        double minimumInput = 0.0;

        bool continuous = false;

        double prevError = 0.0;

        double totalError = 0.0;

        double calculateFeedForward();
    public:
        PIDController(double kP, double kI, double kD, double kF = 0.0, bool sourceType = PID_DISPLACEMENT);

        void setPID(double kP, double kI, double kD, double kF = 0.0);

        void setSetpoint(double setpoint);

        double getSetpoint();

        double getDeltaSetpoint();

        double getError;

        void setContinuous(bool continuous = true);

        void setInputRange(double minimumInput, double maximumInput);

        void setOutputRange(double minimumOutput, double maximumOutput);

        double getP();

        double getI();

        double getD();

        double getF();

        int calculate(double input);

};
#endif
