#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "Roster.h"

#include <sstream>

using namespace std;

Roster::Roster()
{
    for (int i = 0; i< studentAmt; i++)
              classRosterArray[i] = nullptr;
}

