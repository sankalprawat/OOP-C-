#include <iostream>
#include <string>

class SiblingAge
{
    int brotherAge, sisterAge;
    /*
    This function returns 1 if brother's age is greater , returns -1 is sister's age is greater else return 0
    */
    int getMaxAge()
    {
        if (this->brotherAge > this->sisterAge)
        {
            return 1;
        }
        else if (this->sisterAge > this->brotherAge)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }

public:
    SiblingAge(int brotherAge, int sisterAge)
    {
        this->brotherAge = brotherAge;
        this->sisterAge = sisterAge;
    }
    int getBrotherAge()
    {
        return this->brotherAge;
    }
    int getSisterAge()
    {
        return this->sisterAge;
    }
    /*
    this function returns 26 if brother is older , 21 if sister is older else return 25
    */
    int getWeddingAgeofOlderSibling()
    {
        int maxAge = getMaxAge();
        if (maxAge == 1)
        {
            return 26;
        }
        else if (maxAge == -1)
        {
            return 21;
        }
        else
        {
            return 25;
        }
    }
    void setBrotherAge(int brotherAge)
    {
        this->brotherAge = brotherAge;
    }
    void setSisterAge(int sisterAge)
    {
        if (sisterAge > 100)
        {
            std::cout << "Enter a valid age ! (>>100)" << std::endl ;
        }
        else
        {
            this->sisterAge = sisterAge;
        }
    }
    void displaySisterAge()
    {
        std::cout << this->getWeddingAgeofOlderSibling() << std::endl;
    }
};

int main()
{
    SiblingAge *twoAge = new SiblingAge(20, 10);
    std::cout << twoAge->getWeddingAgeofOlderSibling() << std::endl;
    twoAge->setSisterAge(101);
    twoAge->displaySisterAge();
    delete twoAge;
    return 0;
}