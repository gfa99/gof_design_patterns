/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GoF_Visitor_AbstractEmployee_INCLUDED
#define GoF_Visitor_AbstractEmployee_INCLUDED

#include <string>
#include "Visitor/EmployeeInterface.h"

namespace GoF {
namespace Visitor {


    class AbstractEmployee : public EmployeeInterface {
    public:
        ~AbstractEmployee() override = default;
        std::string name() const;
        void earnings(double) override;
        double earnings() const override;
        std::string toString() const override;
        std::string socialSecurityNumber() const;

    protected:
        AbstractEmployee(const std::string & name, const std::string & ssn);

    private:
        double _earnings;
        const std::string _name;
        const std::string _socialSecurityNumber;

    };


} }

#endif
