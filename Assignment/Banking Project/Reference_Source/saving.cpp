#include "saving.h"
#include <QString>

saving::saving(QString number, double balance):
    account(number,balance)
{
    interest_rate=0.0005;
}
saving::~saving()
{

}
void saving::deposit(double)
{

}
bool saving::withdraw(double)
{
    return false;
}
