#ifndef PAYOFF_H //block guards: if compiled, skip to end 
#define PAYOFF_H  // "PAYOFF_H" can be any value that is unique

class PayOff //declaration, elaboration often in cpp file
{
    public:
        enum OptionType {call, put};
        PayOff(double Strike_, OptionType TheOptionType_); //constructor
        //function object(functor) used as function, benefit: keep state, in this case Strike and OptionType
        double operator()(double Spot) const;  
    private:
        double Strike;
        OptionType TheOptionType; 
};


#endif