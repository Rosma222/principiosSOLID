#ifndef IDISPOSITIVO_HPP
#define IDISPOSITIVO_HPP

class IDispositivo {
public:
    virtual void encender() = 0;
    virtual ~IDispositivo() {}
};

#endif