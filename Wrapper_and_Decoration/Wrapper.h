#ifndef WRAPPER_H
#define WRAPPER_H
/*
 *Decorator Pattern:
 * T is the basic componet
 * Wrapper is a decoration class(generic pattern) that wraps the basic component inside
*/

//T is a pointer?
template<class T>
class Wrapper
{
public:
    //default constructor, needed when initialize a vector of Wrapper
    Wrapper()
    {
        DataPtr = 0;
    }
    Wrapper(const T& inner)
    {
        DataPtr = inner.clone();
    }
    ~Wrapper()
    {
        if(DataPtr != 0)
            delete DataPtr;
    }
    Wrapper(const Wrapper<T>& original)
    {
        if(original.DataPtr != 0)
            DataPtr = original.DataPtr->clone();
        else 
            DataPtr = 0;
    }
    Wrapper operator=(const Wrapper<T>& original)
    {
        if(this != &original)
        {
            if(DataPtr != 0)
                delete DataPtr;
            DataPtr = (original.DataPtr != 0) ?
                original.DataPtr->clone() : 0;
        }
        return *this;
    }
    T& operator*()
    {
        return *DataPtr;
    }
    //What's the difference
    const T& operator*() const
    {
        return *DataPtr;
    }
    const T* const operator->() const
    {
        return DataPtr;
    }
    T* operator->()
    {
        return DataPtr;
    }
private:
    T* DataPtr;
};
#endif