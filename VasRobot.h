#include <vector>
#include "Bludiste.h"
#include "Prohledavac.h"

class VasRobot : public Prohledavac {
public:
    virtual bool start(Bludiste & map) {return true;};
    virtual bool start(BludisteOdkryte & map) {return true;};
    virtual bool stop() {};
    virtual void krok(Bludiste & map);
    virtual void krok(BludisteOdkryte & map) {};
    virtual std::string jmeno() {return "Robot";};	
};
