#ifndef RANDOM_H
#define RANDOM_H

class RandomBase
{
public:
    RandomBase(unsigned long Dimensionality);
    inline unsigned long GetDimensionality() const;
    
    virtual RandomBase* clone() const=0;
    virtual void GetUniforms(MJArray& variates)=0;
    virtual void Skip(unsigned long numberOfPaths)=0;
    virtual void SetSeed(unsigned long Seed)=0;
    virtual void Reset()=0;

    virtual void GetOneGaussians(MJArray& variates);
    virtual void ResetDimensionality(unsigned long NewDimensionality);
private:
    unsigned long Dimensionality;
};
unsigned long GetDimensionality() const
{
    return Dimensionality;
}

#endif // RANDOM_H
