#ifndef PARAMETERS_H
#define PARAMETERS_H

//Bridge Pattern: Implementation class
class ParametersInner
{
public:
    virtual ParametersInner* clone() const=0;
    virtual double Integral(double time1, double time2) const=0;
    virtual double IntegralSquare(double time1, double time2) const=0;
    virtual ~ParametersInner(){};
private:
};
//inherited Implementation class (concrete class)
class ParametersConstant : public ParametersInner
{
public:
    ParametersConstant(double Constant);
    virtual ParametersInner* clone() const;
    virtual double Integral(double time1, double time2) const;
    virtual double IntegralSquare(double time1, double time2) const;
private:
    double Constant;
    double ConstantSquare;
};

//Bridge Pattern: Abstract class
class Parameters
{
public:
    Parameters(const ParametersInner& innerObject);
    Parameters(const Parameters& original);
    Parameters& operator=(const Parameters& original);
    virtual ~Parameters();
    inline double Integral(double time1, double time2) const;
    inline double IntegralSquare(double time1, double time2) const;
    double Mean(double time1, double time2) const;
    double RootMeanSquare(double time1, double time2) const;
private:
    ParametersInner* InnerObjPtr;
};
inline double Parameters :: Integral(double time1, double time2) const
{
    return InnerObjPtr->Integral(time1, time2);
}
inline double Parameters :: IntegralSquare(double time1, double time2) const
{
    return InnerObjPtr->IntegralSquare(time1, time2);
}
//Parameters may have inherited abstract class (refined class)


#endif
