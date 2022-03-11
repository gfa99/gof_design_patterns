#include "FactoryMethod/Product/ModelS.h"
#include "FactoryMethod/Factory/TeslaFactory.h"

namespace GoF {

    namespace FactoryMethod {

        ICar * TeslaFactory::create()
        {
            return new ModelS(
                "ModelS",
                "Gray",
                "2015",
                "USA"
            );
        }

    }

}
