#ifndef ARRAYS_H
#define ARRAYS_H
#include "valarray"

class MJArray
{
public:
    explicit  MJArray(unsigned long size=0);
    MJArray(const MJArray& original);
    
    ~MJArray();

    MJArray& operator=(const MJArray& original);
    MJArray& operator=(const double& val);
    
    MJArray& operator+=(const MJArray& operand);
    MJArray& operator-=(const MJArray& operand);
    MJArray& operator/=(const MJArray& operand);
    MJArray& operator*=(const MJArray& operand);

    MJArray apply(double f(double)) const;
    
    inline double operator[](unsigned long i) const;
    inline double& operator[](unsigned long i);
    
    inline unsigned long size() const;
    
    void resize(unsigned long newSize);
    
    double sum() const;
    double min() const;
    double max() const;
private:
    double* ValuesPtr;
    double* EndPtr;
    
    unsigned long Size;
    unsigned long Capacity;    
};

inline double MJArray :: operator[](unsigned long i) const
{
    return ValuesPtr[i];
}
inline double& MJArray::operator[](unisgned long i)
{
    return ValuesPtr[i];
}
inline unsigned long MJArray::size() const
{
    return Size;
}
#endif // ARRAYS_H
