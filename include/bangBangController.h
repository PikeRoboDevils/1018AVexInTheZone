#ifndef BANG_BANG_CONTROLLER_H_
#define BANG_BANG_CONTROLLER_H_

class BangBangController {
    public:

        BangBangController(double minOutput = -127.0, double maxOutput = 127.0, double deadband = 0.0);

        void setSetpoint(double setpoint);

        double calculate(double input);

        void setContinuous(bool continuous = true);
        void setMinInput(double minInput);
        void setMaxInput(double maxInput);
        void setMinOutput(double minOutput);
        void setMaxOutput(double maxOutput);
        void setDeadband(double deadband);
        double getError();

    private:
        double setpoint = 0.0;
        double error = 0.0;
        double result = 0.0;
        double minInput = 0.0;
        double maxInput = 0.0;
        double minOutput;
        double maxOutput;
        double deadband;
        bool continuous = false;

};

#endif
