#include <iostream>

int main()
{
    class Mensch
    {
        public:
            double getGewicht();
            void setGewicht (double gewicht);
        
        private:
            std::string name;
            char geschlecht;
            double gewicht;
            Mensch** eltern;

    };

    double Mensch::getGewicht()
    {
        return gewicht;
    }

    void Mensch::setGewicht(double gewicht)
    {
        this->gewicht = gewicht;
    }

    return 0;
}